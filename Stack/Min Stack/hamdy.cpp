class MinStack {
private:
    int size;
    int* arr = new int;
    int min = INT_MAX;
public:
    MinStack() {
        size = 0;
    }

    void push(int val) {
        arr[size] = val;
        size++;
    }

    void pop() {
        size--;
        arr[size] = NULL;
    }

    int top() {
        return arr[size - 1];
    }

    int getMin() {
        min = arr[0];
        for (int i = 0; i < size; i++) {
            if (arr[i] < min)
                min = arr[i];
        }
        return min;
    }
};
