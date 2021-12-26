#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

class Node
{
public:
    int value;
    Node* left;
    Node* right;
    Node(int value)
    {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinarySearchTree
{
public:
    Node* root = nullptr;
    BinarySearchTree();
    ~BinarySearchTree() = default;
    void insert(int value);
    Node* lookup(int value);
    void remove(int value);
};

// utility functions

void print2DUtil(Node* root, int space);
void print2D(Node* root);

#endif // BINARYSEARCHTREE_H
