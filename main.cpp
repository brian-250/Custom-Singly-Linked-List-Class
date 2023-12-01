#include <iostream>

#include "node.cpp"
#include "singlylinkedlist.cpp"

int main() {
    SinglyLinkedList<int> sll1;
    sll1.pushBack(1);
    sll1.printList();

    return 0;
}