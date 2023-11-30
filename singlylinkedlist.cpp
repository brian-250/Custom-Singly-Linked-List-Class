#include <iostream>

#include "singlylinkedlist.hpp"

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList() : head_(nullptr), tail_(nullptr), size_(0) {}