#include "Graph.h"
#include <stdio.h>
using namespace std;

int main(int argc, char** argv)
{
    Graph<char> *mygraph = new Graph<char>();

    mygraph->addVertix('0');
    mygraph->addVertix('1');
    mygraph->addVertix('2');
    mygraph->addVertix('3');
    mygraph->addVertix('4');
    mygraph->addVertix('5');
    mygraph->addVertix('6');

    mygraph->addConnection('3', '1');
    mygraph->addConnection('3', '4');
    mygraph->addConnection('4', '2');
    mygraph->addConnection('4', '5');
    mygraph->addConnection('1', '2');
    mygraph->addConnection('1', '0');
    mygraph->addConnection('0', '2');
    mygraph->addConnection('6', '5');
    
    mygraph->printAll();
    

    return 0;
}
