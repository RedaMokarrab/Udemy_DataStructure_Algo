#include "BinarySearchTree.h"
#include <iostream>
using namespace std;

BinarySearchTree::BinarySearchTree()
{
    this->root = nullptr;
}
Node* BinarySearchTree::lookup(int value)
{
    Node* foundNode = this->root;

    if(this->root == nullptr) {
        return nullptr;
    } else {
        while(true) {
            if(value < foundNode->value) {
                foundNode = foundNode->left;
            } else if(value > foundNode->value) {
                foundNode = foundNode->right;
            } else if(value == foundNode->value) {
                return foundNode;
            } else {
                return nullptr;
            }
        }
    }
    return nullptr;
}

void BinarySearchTree::insert(int value)
{
    Node* newNode = new Node(value);

    if(this->root == nullptr) {
        this->root = newNode;
    } else {
        Node* current_Node = root;

        while(true) {
            // left
            if(value < current_Node->value) {
                if(current_Node->left == nullptr) {
                    current_Node->left = newNode;
                    break;
                }
                current_Node = current_Node->left;
            }
            // right
            else if(value >= current_Node->value) {
                if(current_Node->right == nullptr) {
                    current_Node->right = newNode;
                    break;
                }
                current_Node = current_Node->right;
            }
        }
    }
}

void BinarySearchTree::remove(int value)
{
    Node* foundNode = this->lookup(value);

    if (foundNode!-nullptr)
    {
        
    }
}

void print2DUtil(Node* root, int space)
{
    // Base case
    if(root == nullptr) {
        return;
    }

    // Increase distance between levels
    space += 10;

    // Process right child first
    print2DUtil(root->right, space);

    // Print current node after space
    // count
    cout << endl;
    for(int i = 10; i < space; i++)
        cout << " ";
    cout << root->value << "\n";

    // Process left child
    print2DUtil(root->left, space);
}

// Wrapper over print2DUtil()
void print2D(Node* root)
{
    // Pass initial space count as 0
    print2DUtil(root, 0);
}
