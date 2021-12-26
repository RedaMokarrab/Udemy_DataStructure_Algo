#include "BinarySearchTree.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    BinarySearchTree myBST;

    myBST.insert(9);
    myBST.insert(4);
    myBST.insert(6);
    myBST.insert(20);
    myBST.insert(170);
    myBST.insert(15);
    myBST.insert(1);

    print2DUtil(myBST.root,0);

    print2DUtil(myBST.lookup(6),0);
 return 0;
}