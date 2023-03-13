#include <string>
#include <iostream>
using namespace std;


class Node { 
    private: 
        int value{};

    protected:
        Node *next{};
        Node *prev{};
        
    
    public: 
        Node() = default;
        Node(int v): value (v) {}
        void assignNext(Node *node) {next = node;}
        void assignPrev(Node *node) {prev = node;}
        Node* getNext() {return next;}
        Node* getPrev() {return prev;}
        int getValue() {return value;}
        void removeFromList();
        bool isInList();
        bool operator >(Node& right);
        //bool operator >(int right);
        bool operator >(Node&& right);
        virtual void printNode();
        virtual ~Node() {}
};

class PersonNode : public Node {
    private:
        std::string name{};
        int age{};
    
    public: 
        PersonNode() = default;
        PersonNode(std::string n);
        PersonNode(std::string n, int a);
        void printNode();
        std::string getName() {return name;}
        int getAge() {return age;}


};

std::string yay(int data) {
    return to_string(data);
}

std::string yay(PersonNode data) {
    std::string s = data.getName() + to_string(data.getAge());
    return s;
}
std::string yay(PersonNode* data) {
    std::string s = data->getName() + to_string(data->getAge());
    return s;
}

template<typename T>
class Node2 {
    private: 
        T data{};

    protected:
        Node2<T> *next{};
        Node2<T> *prev{};
        
    
    public: 
        Node2() = default;
        Node2(T d): data (d) {}
        void assignNext(Node2<T> *node) {next = node;}
        void assignPrev(Node2<T> *node) {prev = node;}
        Node2<T>* getNext() {return next;}
        Node2<T>* getPrev() {return prev;}
        T getValue() {return data;}
        void removeFromList();
        bool isInList();
        // bool operator >(Node& right);
        // //bool operator >(int right);
        // bool operator >(Node&& right);
        void printNode();
        ~Node2() {}
};

template<typename T>
bool Node2<T>::isInList()
{
    if (next == nullptr || prev == nullptr) {
        return false;
    }
    return true;
}

template<typename T>
void Node2<T>::removeFromList() {
    if (isInList()) {
        Node2<T>* nextNode = next;
        Node2<T>* prevNode = prev;
        next = nullptr;
        prev = nullptr;
        nextNode->assignPrev(prevNode);
        prevNode->assignNext(nextNode);
    }
    
}



template<typename T>
void Node2<T>::printNode() {
    std::cout <<yay(data)<<std::endl;
}