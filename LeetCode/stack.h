#ifndef STACK_H
#define STACK_H

class Node {
public:
    int value;
    Node* next;

    Node(int value);
};

class Stack {
private:
    Node* top;
    int height;

public:
    Stack(int value);
    ~Stack();

    void printStack();
    Node* getTop();
    int getHeight();
};

#endif // STACK_H
