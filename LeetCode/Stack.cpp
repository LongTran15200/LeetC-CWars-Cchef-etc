#include <iostream>
#include "Stack.h"

using namespace std;

Node::Node(int value) {
    this->value= value;
    next = nullptr;
    
    
}

Stack::Stack(int value) {

    Node* newNode = new Node(value);
    top = newNode;
    height = 1;
}

/*
Stack::~Stack() {
    Node* temp = top;
    while (top) {
        top = top->next;
        delete temp;
        temp = top;
    }
}

void Stack::printStack() {
    Node* temp = top;
    while (temp) {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

Node* Stack::getTop() {
    return top;
}

int Stack::getHeight() {
    return height;
}

*/
