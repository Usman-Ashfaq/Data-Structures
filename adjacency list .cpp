//#include <iostream>
//using namespace std;
//
//const int MAX_VERTICES = 100; // Max number of vertices allowed
//
//// Node structure for adjacency list
//struct ListNode {
//    int vertex;
//    ListNode* next;
//
//    ListNode(int v) {
//        vertex = v;
//        next = NULL;
//    }
//};
//
//class Graph {
//private:
//    int numVertices;
//    ListNode* adjList[MAX_VERTICES]; // Adjacency list
//
//public:
//    // Constructor
//    //making all null
//    Graph(int vertices) {
//        numVertices = vertices;
//        for (int i = 1; i <= numVertices; i++) {
//            adjList[i] = NULL;
//        }
//    }
//
//    // Function to add undirected edge
//    void addEdge(int u, int v) {
//        // Add v to u's list
//        ListNode* node1 = new ListNode(v);
//        node1->next = adjList[u];
//        adjList[u] = node1;
//
//        // Add u to v's list
//        ListNode* node2 = new ListNode(u);
//        node2->next = adjList[v];
//        adjList[v] = node2;
//    }
//
//    // Function to print adjacency list
//    void printAdjList() {
//        cout << "Adjacency List:\n";
//        for (int i = 1; i <= numVertices; i++) {
//            cout << i << " -> ";
//            ListNode* temp = adjList[i];
//            while (temp != NULL) {
//                cout << temp->vertex << " ";
//                temp = temp->next;
//            }
//            cout << endl;
//        }
//    }
//
//    // Destructor to clean memory
//    ~Graph() {
//        for (int i = 1; i <= numVertices; i++) {
//            ListNode* temp = adjList[i];
//            while (temp != NULL) {
//                ListNode* del = temp;
//                temp = temp->next;
//                delete del;
//            }
//        }
//    }
//};
//
//// Main function to test
//int main() {
//    int N = 5; // number of vertices
//    int M = 6; // number of edges
//
//    Graph g(N);
//
//    // Sample 6 undirected edges
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(2, 4);
//    g.addEdge(3, 4);
//    g.addEdge(4, 5);
//    g.addEdge(2, 5);
//
//    g.printAdjList();
//
//    return 0;
//}
