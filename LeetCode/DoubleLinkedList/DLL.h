#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H


class Node {
    public:
        int value;
        Node* next;
        Node* prev;

        Node(int value);
};

class DoublyLinkedList {
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        DoublyLinkedList(int value);
        ~DoublyLinkedList();
        
        void printList();
        void printAll();
        Node* getHead();
        Node* getTail();
        int getLength();
        void append(int value);
        void deleteLast();
        void prepend(int value);
        void deleteFirst();
        Node* get(int index);
        bool set(int index, int value);
        bool insert(int index, int value);
        void deleteNode(int index);
};

#endif // DOUBLY_LINKED_LIST_H
