#ifndef SINGLYLINKEDLIST_HPP
#define SINGLYLINKEDLIST_HPP

#include "node.hpp"

// template<typename T> is written again to correctly;
// templated with type paramter T to ensure Node<T> instances
// used as member variables are instantiated with the same type
template<typename T>
class SinglyLinkedList {
    public:
        SinglyLinkedList();
        int size();
        void pushBack(T data);
        void popBack();
        void printList();

    private:
        Node<T>* head_;
        Node<T>* tail_;
        int size_;
};

#endif
