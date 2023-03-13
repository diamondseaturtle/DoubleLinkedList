#include "Node.h"

// class DoubleLinkedList {
//     private:
//         Node head;
//         int size;
        
//     public:
//         DoubleLinkedList();
//         ~DoubleLinkedList();
//         void insertAtTail(Node* node);
//         void insertAtHead(Node* node);
//         void remove(int index);
//         bool isEmpty();
//         int length();
//         void print();
//         Node* getNode(int index);
// };

template<typename T>
class DoubleLinkedList2 {
    private:
        Node2<T> head;
        int size;
        
    public:
        DoubleLinkedList2();
        //~DoubleLinkedList2();
        void insertAtTail(T node);
        void insertAtHead(T node);
        void remove(int index);
        bool isEmpty();
        int length();
        void print();
        Node2<T>* getNode(int index);
};