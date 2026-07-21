class Solution {
public:
    int helper(vector<int>& stations, double dist) {
        int cnt = 0;

        for(int i = 1; i < stations.size(); i++) {
            double gap = stations[i] - stations[i - 1];
            cnt += (int)(gap / dist);

            if(gap == dist * (int)(gap / dist))
                cnt--;
        }

        return cnt;
    }

    double minMaxDist(vector<int>& stations, int k) {
        double low = 0;
        double high = 0;

        for(int i = 1; i < stations.size(); i++) {
            high = max(high, (double)(stations[i] - stations[i - 1]));
        }

        for(int iter = 0; iter < 100; iter++) {
            double mid = low + (high - low) / 2.0;

            if(helper(stations, mid) > k)
                low = mid;
            else
                high = mid;
        }

        return high;
    }
};