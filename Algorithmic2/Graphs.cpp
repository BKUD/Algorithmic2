#include <iostream>
#include <fstream>

#include "StructureOfList.cpp"

// Класс для работы с графом
class Graph {
private:
    AdjacencyList* list;
    int n;

public:
    Graph(const std::string& filename) : list(nullptr), n(0) {
        std::ifstream file(filename);
        if (!file) {
            std::cout << "Не удалось открыть файл" << std::endl;
            return;
        }

        file >> n;

        list = new AdjacencyList[n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int temp;
                file >> temp;
                if (temp == 1) {
                    list[i].addNode(j);
                }
            }
        }
    }


    void printGraph() {
        for (int i = 0; i < n; i++) {
            std::cout << i << ": ";
            list[i].printList();
        }
    }

    ~Graph() {
        delete[] list;
    }
};