#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    Node(T data);

    T data_;
    Node* next_;
};

#endif