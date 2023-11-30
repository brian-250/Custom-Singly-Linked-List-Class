#include <iostream>

#include "singlylinkedlist.hpp"

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList() : head_(nullptr), tail_(nullptr), size_(0) {}

template<typename T>
void SinglyLinkedList<T>::pushBack(T data) {
   // new_node pointer is initialized to
   // a dynamically allocated Node object
   Node<T>* new_node = new Node<T>(data);
   if ((head_ == nullptr) && (tail_ == nullptr)) {
       head_ = new_node;
       tail_ = new_node;
       size_++;
   } else {
       tail_->next_ = new_node;
       tail_ = tail_->next_;
       size_++;
   }
}
