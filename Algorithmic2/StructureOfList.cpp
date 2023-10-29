#include <iostream>

struct Node {
    int data;
    Node* next;
};

// Класс для хранения списка смежности
class AdjacencyList {
private:
    Node* head;
public:
    AdjacencyList() : head(nullptr) {}

    void addNode(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};