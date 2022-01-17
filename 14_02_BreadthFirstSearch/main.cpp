#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

void list_print(vector<int> v)
{
    for(auto item : v) {
        cout << item << " ";
    }
    cout<<endl;
}
int main(int argc, char **argv)
{
	BinarySearchTree myBST;
    vector<int> temp;
    
    myBST.insert(9);
    myBST.insert(4);
    myBST.insert(6);
    myBST.insert(20);
    myBST.insert(170);
    myBST.insert(15);
    myBST.insert(1);

    print2DUtil(myBST.root,0);

    /*BFS*/
    temp = myBST.breadthFirstSearch();
    list_print(temp);
    
    /*BFS recursive */
    temp = myBST.breadthFirstSearchRecursive( );
    list_print(temp);
    
    /*DFS*/
    cout<<"InOrder"<<endl;
    temp = myBST.depthFirstSearchInOrder();
    list_print(temp);
    cout<<"PreOrder"<<endl;
    temp = myBST.depthFirstSearchPreOrder();
    list_print(temp);
    cout<<"PostOrder"<<endl;
    temp = myBST.depthFirstSearchPostOrder();
    list_print(temp);

	return 0;
}

