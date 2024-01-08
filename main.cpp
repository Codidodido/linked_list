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

    static void Add(int value) {
        if (head == nullptr) {
            head = MakeNode(value);
        } else {
            Node* f = head;
            while (f->next != nullptr) {
                f = f->next;
        	}

            Node* p = MakeNode(value);
            f->next = p;
        }
    }
    
    static void Vanish(){
    	Node *f = head;
    	while(f!=nullptr){
    		Node *tmp = f;
    		f = f->next;
    		delete tmp;
		}
		
		head = nullptr;
	}
    
    static void Display(){
    	cout << "[";
    	for(Node *i = head ; i != nullptr; i = i->next){
    		cout << i->data;
    		if(i->next!=nullptr){
    			cout << ", ";
			}
		}
		cout << "]"<<endl;
    static Node* Search(int value) {
        Node* f = head;
        while (f != nullptr) {
            if (f->data == value) {
                return f;
            }
            f = f->next;
        }
        return nullptr;
    }

    static Node* SearchParent(Node* node) {
        Node* f = head;
        while (f != nullptr && f->next != node) {
            f = f->next;
        } 
        return f;
    }
	}
};


Node* Node::head = nullptr;


int main(){
}