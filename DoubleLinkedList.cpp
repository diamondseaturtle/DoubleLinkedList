#include "DoubleLinkedList.h"
#include <iostream>
#include <assert.h>
using namespace std;

// DoubleLinkedList::DoubleLinkedList() {
//     size = 0;
//     head.assignNext(&head);
//     head.assignPrev(&head);

// }

// bool DoubleLinkedList::isEmpty() {
//     if (head.getNext() == &head && head.getPrev() == &head) {
//         return true;
//     }
//     return false;
// }

// void DoubleLinkedList::insertAtHead(Node* node) {
//     Node* temp = head.getNext();
//     head.assignNext(node);
//     node->assignNext(temp);
//     node->assignPrev(&head);
//     temp->assignPrev(node);
//     size++;

// }

// void DoubleLinkedList::insertAtTail(Node* node) {
//     Node* tail = head.getPrev();
//     tail->assignNext(node);
//     head.assignPrev(node);
//     node->assignPrev(tail);
//     node->assignNext(&head);
//     size++;
// }

// void DoubleLinkedList::print() {
//     Node* point = head.getNext();
//     while (point != &head) {
//         point->printNode();
//         point = point->getNext();
//     }
// }

// DoubleLinkedList::~DoubleLinkedList() {
//     while (head.getNext() != &head) {
//         Node* n = head.getNext();
//         n->removeFromList();
//         delete n;
        
//     }
//     cout<<"LinkedList deleted"<<endl;
// }

// int DoubleLinkedList::length() {
//     return size + 1;
// }

// Node* DoubleLinkedList::getNode(int index) {
//     Node* point = head.getNext();
//     int counter = 0;
//     while (point != &head) {
//         if (counter == index) {
//             return point;
//         }
//         point = point->getNext();
//         counter++;
//     }
//     return nullptr;
// }

// void DoubleLinkedList::remove(int index){
//     Node* n = getNode(index);
//     if (n != nullptr) {
//         n->removeFromList();
//         size--;
//         delete n;
//     }
    
// }
// bool operator >(Node& left, int right) {
//     return (left.getValue() > right);
// }

template<typename T> DoubleLinkedList2<T>::DoubleLinkedList2() {
    size = 0;
    head.assignNext(&head);
    head.assignPrev(&head);

}

template<typename T> bool DoubleLinkedList2<T>::isEmpty() {
    if (head.getNext() == &head && head.getPrev() == &head) {
        return true;
    }
    return false;
}

template<typename T> void DoubleLinkedList2<T>::insertAtHead(T node) {
    Node2<T>* temp = head.getNext();
    Node2<T>* n = new Node2<T>(node);
    head.assignNext(n);
    n->assignNext(temp);
    n->assignPrev(&head);
    temp->assignPrev(n);
    size++;

}

template<typename T> void DoubleLinkedList2<T>::insertAtTail(T node) {
    Node2<T>* tail = head.getPrev();
    Node2<T>* n = new Node2<T>(node);
    tail->assignNext(n);
    head.assignPrev(n);
    n->assignPrev(tail);
    n->assignNext(&head);
    size++;
}

template<typename T> void DoubleLinkedList2<T>::print() {
    Node2<T>* point = head.getNext();
    while (point != &head) {
        point->printNode();
        point = point->getNext();
    }
}

int main() {
    // DoubleLinkedList d; 
    // if (d.isEmpty()) {
    //     cout <<"yes";
    // } else {
    //     cout <<"no";
    // }
    // cout << endl;

    // for (int i = 0; i < 10; i++){
    //     if (i % 2 == 0) {
    //         Node* n = new Node(i);
    //         d.insertAtTail(n);
    //     } else {
    //         PersonNode* p = new PersonNode("urmom", i);
    //         d.insertAtTail(p);
    //     }
        
    //     //d.insertAtHead(n);
        
    // }
    // // d.print();
    // // assert(d.getNode(0)->getValue() == 0);
    // // assert(d.getNode(20) == nullptr);
    // // assert(d.getNode(9)->getValue() == 9);
    // // Node* n1 = d.getNode(2);
    // // Node* n2 = d.getNode(8);
    // // assert(*n2 > *n1);
    // // assert(*n2 > 0);
    // // assert(*n2 > *(new Node(1)));
    // // d.remove(2);
    // // d.print();
    DoubleLinkedList2<PersonNode*> d;
    for (int i = 0; i < 10; i++){
        PersonNode* n = new PersonNode("urmom", i);
        d.insertAtTail(n);
    }
    DoubleLinkedList2<char> d2;
    for (int i = 0; i < 10; i++){
        d2.insertAtTail(i);
    }

    d.print();
    d2.print();
    return 0;
}

