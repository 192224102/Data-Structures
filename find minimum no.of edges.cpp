#include <stdio.h>
#include <stdlib.h>
#define MAX 10000
struct Queue {
    int items[MAX];
    int front;
    int rear;
};
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}
int isEmpty(struct Queue* queue) {
    if(queue->rear == -1)
        return 1;
    else
        return 0;
}
void enqueue(struct Queue* queue, int value) {
    if(queue->rear == MAX-1)
        printf("\nQueue is Full!!");
    else {
        if(queue->front == -1)
            queue->front = 0;
        queue->rear++;
        queue->items[queue->rear] = value;
    }
}
int dequeue(struct Queue* queue) {
    int item;
    if(isEmpty(queue)) {
        printf("\nQueue is Empty!!");
        item = -1;
    }
    else {
        item = queue->items[queue->front];
        queue->front++;
        if(queue->front > queue->rear) {
            queue->front = queue->rear = -1;
        }
    }
    return item;
}
int visited[MAX];
void initializeVisitedArray(int n) {
    int i;
    for(i = 0; i < n; i++) {
        visited[i] = 0;
    }
}
int bfs(int source, int destination, int n, int adjMatrix[MAX][MAX]) {
    struct Queue* queue = createQueue();
    int currentVertex, i;
    enqueue(queue, source);
    visited[source] = 1;
    while(!isEmpty(queue)) {
        currentVertex = dequeue(queue);
        if(currentVertex == destination)
            return visited[currentVertex] - 1; 

        for(i = 0; i < n; i++) {
            if(adjMatrix[currentVertex][i] == 1 && !visited[i]) {
                enqueue(queue, i);
                visited[i] = visited[currentVertex] + 1;
            }
        }
    }
    return -1;
}
int main() {
    int n, m;
    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &n, &m);

    int adjMatrix[MAX][MAX] = {0};

    printf("Enter the edges (vertex1 vertex2): \n");
    int i;
    for(i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        adjMatrix[u][v] = adjMatrix[v][u] = 1;
    }
    int source, destination;
    printf("Enter the source and destination vertices: ");
    scanf("%d %d", &source, &destination);
    initializeVisitedArray(n);
    int minEdges = bfs(source, destination, n, adjMatrix);

    if(minEdges == -1)
        printf("There is no path between the given pair of vertices.\n");
    else
        printf("Minimum number of edges between %d and %d is: %d\n", source, destination, minEdges);

    return 0;
}
