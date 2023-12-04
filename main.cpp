#include <iostream>

#include "node.cpp"
#include "singlylinkedlist.cpp"

int main() {
    SinglyLinkedList<int> sll1;
    sll1.pushBack(1);
    sll1.pushBack(34);
    sll1.pushBack(8);
    sll1.pushBack(7);
    sll1.popBack();
    sll1.printList();

    return 0;
}
