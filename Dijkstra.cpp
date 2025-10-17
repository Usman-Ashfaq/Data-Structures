#include <iostream>
using namespace std;

const int MAX = 100;      // Maximum number of vertices
const int INF = 1e9;      // A large value representing infinity

class Dijkstra {
    int graph[MAX][MAX];  // Adjacency matrix
    int dist[MAX];        // Distance from source to each vertex
    bool visited[MAX];    // Keeps track of visited vertices
    int n;                // Number of vertices

public:
    Dijkstra(int vertices) {
        n = vertices;
        for (int i = 0; i < n; i++) {
            dist[i] = INF;
            visited[i] = false;
            for (int j = 0; j < n; j++) {
                graph[i][j] = 0; 
            }
        }
    }
//function to add edge 
    void addEdge(int u, int v, int w) {
        graph[u][v] = w;
        graph[v][u] = w;  // For undirected graph
    }
//function to find distance
    int findMinDistance() {
        int min = INF;
        int minIndex = -1;

        for (int v = 0; v < n; v++) {
            if (!visited[v] && dist[v] <= min) {
                min = dist[v];
                minIndex = v;
            }
        }

        return minIndex;
    }
    //printing
    void printDistances(int src) {
        cout << "Vertex\tDistance from Source " << src << endl;
        for (int i = 0; i < n; i++) {
            cout << i << "\t" << dist[i] << endl;
        }
    }
//main algorithm
    void run(int src) {
        dist[src] = 0;

        for (int count = 0; count < n - 1; count++) {
            int u = findMinDistance();

            visited[u] = true;

            for (int v = 0; v < n; v++) {
                if (!visited[v] && graph[u][v] && dist[u] != INF) {
                    int sum = dist[u] + graph[u][v]; // store total distance to v through u
                    if (sum < dist[v]) {
                        dist[v] = sum;
                    }
                }
            }
        }

        printDistances(src);  //caling print function
    }


};

int main() {
    int vertices = 5;
    Dijkstra d(vertices);

    d.addEdge(0, 1, 10);
    d.addEdge(0, 4, 5);
    d.addEdge(1, 2, 1);
    d.addEdge(1, 4, 2);
    d.addEdge(2, 3, 4);
    d.addEdge(3, 0, 7);
    d.addEdge(4, 2, 9);
    d.addEdge(4, 3, 2);

    d.run(0);
    return 0;
}
