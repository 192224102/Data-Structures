#include <stdio.h> 
#define MAX_VERTICES 100 
int main()  
{ 
    int N,M,i; 
    printf("Enter the number of vertices (N) and edges (M): "); 
    scanf("%d %d", &N, &M); 
    int graph[MAX_VERTICES][MAX_VERTICES] = {0}; 
    printf("Enter the edges (u v):\n"); 
    for (i = 1; i < M; i++)  
 { 
        int u, v; 
        scanf("%d %d", &u, &v); 
        graph[u][v] = graph[v][u] = 1; // Since it is an undirected graph 
    } 
    int source, destination; 
    printf("Enter the source and destination vertices: "); 
    scanf("%d %d", &source, &destination); 
    int queue[MAX_VERTICES], front = -1, rear = -1, visited[MAX_VERTICES] = {0}, 
distance[MAX_VERTICES] = {0}; 
    queue[++rear] = source; 
    visited[source] = 1; 
    while (front < rear) { 
        int current = queue[++front]; 
        for (i = 1; i <= N; i++) { 
            if (graph[current][i] == 1 && !visited[i]) { 
                queue[++rear] = i; 
                visited[i] = 1; 
                distance[i] = distance[current] + 1; 
                if (i == destination)  
    { 
                    printf("Minimum number of edges between (%d, %d): %d\n", 
source, destination, distance[i]); 
                    return 0; 
                } 
            } 
        } 
    } 
    printf("No path found between (%d, %d).\n", source, destination); 
    return 0; 
}
