#include "Node.h"
#include <iostream>
using namespace std;

bool Node::isInList()
{
    if (next == nullptr || prev == nullptr) {
        return false;
    }
    return true;
}

void Node::removeFromList() {
    if (isInList()) {
        Node* nextNode = next;
        Node* prevNode = prev;
        next = nullptr;
        prev = nullptr;
        nextNode->assignPrev(prevNode);
        prevNode->assignNext(nextNode);
    }
    
}

void Node::printNode() {
    cout <<value<<endl;
}

bool Node::operator >(Node& right){
    return (value > right.value);
}

// bool Node::operator >(int right){
//     return (value > right);
// }

bool Node::operator >(Node&& right){
    return (value > right.value);
}

PersonNode::PersonNode(string n) {
    name = n;
}

PersonNode::PersonNode(string n, int a) {
    name = n;
    age = a;
}

void PersonNode::printNode(){
    cout <<name<<age<<endl;
}



////////////////////////////////////////////

// template<typename T>
// bool Node2<T>::isInList()
// {
//     if (next == nullptr || prev == nullptr) {
//         return false;
//     }
//     return true;
// }

// template<typename T>
// void Node2<T>::removeFromList() {
//     if (isInList()) {
//         Node2<T>* nextNode = next;
//         Node2<T>* prevNode = prev;
//         next = nullptr;
//         prev = nullptr;
//         nextNode->assignPrev(prevNode);
//         prevNode->assignNext(nextNode);
//     }
    
// }

// template<typename T>
// void Node2<T>::printNode() {
//     cout <<data<<endl;
// }