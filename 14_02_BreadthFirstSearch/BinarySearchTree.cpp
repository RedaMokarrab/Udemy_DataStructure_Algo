#include "BinarySearchTree.h"
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

vector <int> dfsInOrder(Node* node,vector<int>&v );
vector <int> dfsPreOrder(Node* node,vector<int>&v );
vector <int> dfsPostOrder(Node* node,vector<int>&v );
vector<int> bfsRecursive(queue<Node*>& q, vector<int>& v);


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

    if(foundNode != nullptr) {
    }
}

vector<int> BinarySearchTree::breadthFirstSearch()
{
    Node* current_node = root;
    vector<int> list {};
    queue<Node*> myQueue {};

    myQueue.push(root);

    while(myQueue.size() > 0) {
        current_node = myQueue.front();
        myQueue.pop();
        list.push_back(current_node->value);
        if(current_node->left != nullptr) {
            myQueue.push(current_node->left);
        }
        if(current_node->right != nullptr) {
            myQueue.push(current_node->right);
        }
    }
    return list;
}


vector<int> BinarySearchTree::breadthFirstSearchRecursive()
{
    queue<Node*> q;
    vector<int> v;
    q.push(root);

    return bfsRecursive(q, v);
}

vector<int> BinarySearchTree::depthFirstSearchInOrder()
{
    vector<int> v;
    return dfsInOrder(root,v);
}

vector<int> BinarySearchTree::depthFirstSearchPreOrder()
{
    vector<int> v;
    return dfsPreOrder(root,v);
}

vector<int> BinarySearchTree::depthFirstSearchPostOrder()
{
    vector<int> v;

    return dfsPostOrder(root,v);
}




vector <int> dfsInOrder(Node* node,vector<int>&v )
{
    if(node->left!=nullptr)
    {
        dfsInOrder(node->left,v);
    }
    v.push_back(node->value);
    if(node->right!=nullptr)
    {
      dfsInOrder(node->right,v);   
    }   
     
return v;   
}
vector <int> dfsPreOrder(Node* node,vector<int>&v )
{
        v.push_back(node->value);
        
      if(node->left!=nullptr)
    {
        dfsInOrder(node->left,v);
    }

    if(node->right!=nullptr)
    {
      dfsInOrder(node->right,v);   
    }   
    
    return v;
}


vector <int> dfsPostOrder(Node* node,vector<int>&v )
{
     if(node->left!=nullptr)
    {
        dfsInOrder(node->left,v);
    }

    if(node->right!=nullptr)
    {
      dfsInOrder(node->right,v);   
    }   
        v.push_back(node->value);
        
    return v;
}


vector<int> bfsRecursive(queue<Node*>& q, vector<int>& v)
{
    if(q.size() == 0)
        return v;
    Node* current_node = q.front();
    q.pop();
    v.push_back(current_node->value);
    if(current_node->left != nullptr) {
        q.push(current_node->left);
    }
    if(current_node->right != nullptr) {
        q.push(current_node->right);
    }
    return bfsRecursive(q, v);
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
