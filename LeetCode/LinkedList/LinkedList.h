#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node { 
    public:
        int value;
        Node* next;

        Node(int value); 
}; 

class LinkedList {
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        LinkedList(int value);
        ~LinkedList();

        void printList();
        void printAll();
        Node* getHead();
        Node* getTail();
        int getLength();
        void append(int value);
        void deleteLast();
};

#endif
