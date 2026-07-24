class myQueue {

    int *arr;
    int left;
    int right;
    int size;
    int count;     // number of elements

public:
    myQueue(int n) {
        arr = new int[n];
        size = n;
        left = 0;
        right = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }

    void enqueue(int x) {
        if (isFull()) return;

        right = (right + 1) % size;
        arr[right] = x;
        count++;
    }

    void dequeue() {
        if (isEmpty()) return;

        left = (left + 1) % size;
        count--;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[left];
    }

    int getRear() {
        if (isEmpty()) return -1;
        return arr[right];
    }
};