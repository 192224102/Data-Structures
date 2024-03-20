#include <stdio.h> 
#include <stdlib.h> 
#define MAX_SIZE 10 
struct Queue { 
    int front, rear; 
    int arr[MAX_SIZE]; 
}; 
int main() { 
    struct Queue myQueue; 
    myQueue.front = myQueue.rear = -1; 
    if (myQueue.rear == -1) { 
        myQueue.front = myQueue.rear = 0; 
        myQueue.arr[myQueue.rear] = 10; 
        printf("Enqueued: %d\n", myQueue.arr[myQueue.rear]); 
    } 
    myQueue.rear = (myQueue.rear + 1) % MAX_SIZE; 
    myQueue.arr[myQueue.rear] = 20; 
    printf("Enqueued: %d\n", myQueue.arr[myQueue.rear]); 
    myQueue.rear = (myQueue.rear + 1) % MAX_SIZE; 
    myQueue.arr[myQueue.rear] = 30; 
    printf("Enqueued: %d\n", myQueue.arr[myQueue.rear]); 
    if (myQueue.front != -1) { 
        printf("Dequeued: %d\n", myQueue.arr[myQueue.front]); 
        if (myQueue.front == myQueue.rear) { 
            myQueue.front = myQueue.rear = -1; 
        } else { 
            myQueue.front = (myQueue.front + 1) % MAX_SIZE; 
        } 
    } 
    if (myQueue.front != -1) { 
        printf("Dequeued: %d\n", myQueue.arr[myQueue.front]); 
        if (myQueue.front == myQueue.rear) { 
            myQueue.front = myQueue.rear = -1; 
        } else { 
            myQueue.front = (myQueue.front + 1) % MAX_SIZE; 
        } 
    } else { 
        printf("Queue is empty. Cannot dequeue.\n"); 
    } 
    myQueue.rear = (myQueue.rear + 1) % MAX_SIZE; 
    myQueue.arr[myQueue.rear] = 40; 
    printf("Enqueued: %d\n", myQueue.arr[myQueue.rear]); 
    return 0; 
}
