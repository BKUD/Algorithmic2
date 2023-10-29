#include "Graphs.cpp"

int main() {
    setlocale(LC_ALL, "Russian");
    Graph graph("matrix.txt");
    graph.printGraph();

    return 0;
}
