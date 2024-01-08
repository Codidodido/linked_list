#include <iostream>
using namespace std;


class Node {
private:
    int data;
    Node* next;

    static Node* head;

public:
    Node(int _data, Node* _next = nullptr) {
        this->data = _data;
        this->next = _next;
    }
};


Node* Node::head = nullptr;


int main(){
}