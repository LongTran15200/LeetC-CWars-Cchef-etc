#include <iostream> 
#include "LinkedList.h"

using namespace std;


Node::Node(int value) {
    this->value = value;
    next = nullptr;
}

LinkedList::LinkedList(int value) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}

/*
LinkedList::~LinkedList() {
    Node* temp = head;
    while (head) {
        head = head->next;
        delete temp;
        temp = head;
    }
}

void LinkedList::printList() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

void LinkedList::printAll() {
    if (length == 0) {
        cout << "Head: null" << endl;
        cout << "Tail: null" << endl;
    } else {
        cout << "Head: " << head->value << endl;
        cout << "Tail: " << tail->value << endl;
    }
    cout << "Length: " << length << endl;
    cout << "\nLinked List:" << endl;
    if (length == 0) {
        cout << "empty" << endl;
    } else {
        printList();
    }
}

Node* LinkedList::getHead() {
    return head;
}

Node* LinkedList::getTail() {
    return tail;
}

int LinkedList::getLength() {
    return length;
}
*/
  
void LinkedList::append(int value) {
    Node* newNode = new Node(value);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    length++;
}

//You start at the beginning of the linkedlist and start iterate down to the last element of the linkedlist
void LinkedList::deleteLast() {
    //if no variable inside linkedlist, return.
    if(length == 0){
        return;
    }
    Node* temp = head;
    Node* pre  = head;

  //While temp is pointing to next that is not nullptr
    while(temp->next){
      
        pre = temp;
        temp = temp->next;
    }
    tail = pre;
    tail->next = nullptr;
    length--;
  
    if(length == 0){
        tail = nullptr;
        head = nullptr;
    }
  //delete temp from the memmory.
    delete temp;
}
void LinkedList::prepend(int value) {
    Node* newNode = new Node(value);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    length++;
}

void LinkedList::deleteFirst() {
    if (length == 0) return;
    Node* temp = head;
    if (length == 1) {
        head = nullptr;
        tail = nullptr;
    } else {
        head = head->next;
    }
    delete temp;
    length--;
}

Node* LinkedList::get(int index) {
    if (index < 0 || index >= length) return nullptr;
    Node* temp = head;
    for (int i = 0; i < index; ++i) {
        temp = temp->next;
    }
    return temp;
}

bool LinkedList::set(int index, int value) {
    Node* temp = get(index);
    if (temp) {
        temp->value = value;
        return true;
    } 
    return false;
}

bool LinkedList::insert(int index, int value) {
    if (index < 0 || index > length) return false;
    if (index == 0) {
        prepend(value);
        return true;
    }
    if (index == length) {
        append(value);
        return true;
    }
    Node* newNode = new Node(value);
    Node* temp = get(index - 1);
    newNode->next = temp->next;
    temp->next = newNode;
    length++;
    return true;
}

void LinkedList::deleteNode(int index) {
    if (index < 0 || index >= length) return;
    if (index == 0) return deleteFirst();
    if (index == length - 1) return deleteLast();

    Node* prev = get(index - 1);
    Node* temp = prev->next;

    prev->next = temp->next;
    delete temp;
    length--;        
}

void LinkedList::reverse() {
    Node* temp = head;
    head = tail;
    tail = temp;
    
    Node* before = nullptr;
    Node* after = temp->next;
    
    for(int i = 0; i < length; i++){
        after = temp->next;
        temp->next = before;
        before = temp;
        temp = after;
    }
}




