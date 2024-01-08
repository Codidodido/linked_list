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

	static Node* MakeNode(){
		return new Node(NULL);
	}

    static Node* MakeNode(int value) {
        return new Node(value);
    }

    static Node* MakeNode(int value, Node* node) {
        return new Node(value, node);
    }
};


Node* Node::head = nullptr;


int main(){
}