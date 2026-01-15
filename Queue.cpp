#include <iostream>
#include <cstdlib>  // For malloc and free
using namespace std;

struct Queue {
    int size;   // Size of the queue
    int f;      // Front of the queue
    int r;      // Rear of the queue
    int* arr;   // Array to hold queue elements
};

int isFull(struct Queue *q) {
    return (q->r == q->size - 1);
}

int isEmpty(struct Queue *q){
    return (q->f == q->r);
}

void enqueue(struct Queue *q, int val) {
    if (isFull(q)) {
        cout << "Queue is full" << endl;
    } else {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        cout << "Queue is empty" << endl;
        return -1;  // Return -1 to indicate an empty queue
    } else {
        q->f++;
        return q->arr[q->f];
    }
}

int main() {
    struct Queue q;
    cout << "Enter the size of the queue: ";
    cin >> q.size;
    q.f = -1;  // Initialize front to -1 (empty queue)
    q.r = -1;  // Initialize rear to -1 (empty queue)
    q.arr = (int*)malloc(q.size * sizeof(int));  // Allocate memory for the queue array

    if (q.arr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // Enqueue elements into the queue
    int val;
    cout << "Enter the value to enqueue: ";
    cin >> val;
    enqueue(&q, val);

    if (isEmpty(&q)) {
        cout << "Queue is empty" << endl;
    }

    if (isFull(&q)) {
        cout << "Queue is Full" << endl;
    }

    // Dequeue elements from the queue
    cout << "Dequeued element: " << dequeue(&q) << endl;
    cout << "Dequeued element: " << dequeue(&q) << endl;

    // Free allocated memory
    free(q.arr);

    return 0;
}
