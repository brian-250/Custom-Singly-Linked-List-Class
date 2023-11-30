#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
struct Node {
    Node(T data);

    T data_;
    Node* next_;
};

#endif