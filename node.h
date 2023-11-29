template <typename T>
struct Node {
    Node(T data);

    T data_;
    node* next_;
};