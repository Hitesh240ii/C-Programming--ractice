#include <stdio.h>
#include <stdlib.h>

#define SIZE 20
#define TRUE 1
#define FALSE 0

void Create();
void BFS(int);

int G[SIZE][SIZE], Visit[SIZE];
int Q[SIZE];
int Front = -1, Rear = -1, n;

int main() {
    int v1, v2;
    char Ans = 'y';

    Create();

    // Display adjacency matrix
    printf("\n The Adjacency Matrix of the graph: \n");
    for (v1 = 0; v1 < n; v1++) {
        for (v2 = 0; v2 < n; v2++) {
            printf("%d ", G[v1][v2]);
        }
        printf("\n");
    }

    do {
        // Reset visited array
        for (v1 = 0; v1 < n; v1++) {
            Visit[v1] = FALSE;
        }

        printf("\n Enter the vertex from which you want to traverse: ");
        scanf("%d", &v1);
        if (v1 >= n) {
            printf("\n Invalid Vertex\n");
        } else {
            printf("\n The Breadth First Search of the Graph is: \n");
            BFS(v1);
        }

        printf("\n Do you want to traverse from any other vertex (y/n): ");
        fflush(stdin);
        scanf(" %c", &Ans);
    } while (Ans == 'y' || Ans == 'Y');

    return 0;
}

void Create() {
    int v1, v2;
    char Ans = 'y';

    printf("\n Program to create a Graph");
    printf("\n Enter the no. of nodes: ");
    scanf("%d", &n);

    // Initialize the adjacency matrix with 0 (no edges)
    for (v1 = 0; v1 < n; v1++) {
        for (v2 = 0; v2 < n; v2++) {
            G[v1][v2] = FALSE;
        }
    }

    printf("\n\n Enter the vertices no. starting from 0 \n");
    do {
        printf("\n Enter the vertices v1 & v2: ");
        scanf("%d%d", &v1, &v2);

        if (v1 >= n || v2 >= n) {
            printf("\n Invalid Vertex value");
        } else {
            G[v1][v2] = TRUE;
            G[v2][v1] = TRUE; // For undirected graph
        }

        printf("\n\n Want to add more edges ? (y/n): ");
        fflush(stdin);
        scanf(" %c", &Ans);
    } while (Ans == 'Y' || Ans == 'y');
}

void BFS(int v1) {
    int v2;

    // Mark the starting vertex as visited and enqueue it
    Visit[v1] = TRUE;
    Q[++Rear] = v1;

    while (Front != Rear) {
        v1 = Q[++Front];
        printf("%d\n", v1); // Dequeue vertex and print it

        // Explore adjacent vertices
        for (v2 = 0; v2 < n; v2++) {
            if (G[v1][v2] == TRUE && Visit[v2] == FALSE) {
                Q[++Rear] = v2;
                Visit[v2] = TRUE;
            }
        }
    }
}
