#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include <string>
#include <queue>
#include <vector>
using namespace std;

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
    vector<int> breadthFirstSearch();
     vector<int> breadthFirstSearchRecursive();
     vector<int> depthFirstSearchInOrder();
     vector<int> depthFirstSearchPreOrder();
     vector<int> depthFirstSearchPostOrder();
     
};

// utility functions

void print2DUtil(Node* root, int space);
void print2D(Node* root);

#endif // BINARYSEARCHTREE_H
