#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

template <typename T>
class Graph
{
private:
    unordered_map<T, vector<T>> data;

public:
    Graph() {};

    ~Graph() = default;

    void addVertix(T node)
    {
        this->data[node] ={};
    }

    void addConnection(T node, T connectedNode)
    {
        this->data[node].push_back(connectedNode);
        this->data[connectedNode].push_back(node);
    }

    void printAll()
    {
        for(auto item : this->data) {
            cout << item.first << "->";
            for(auto vitem : item.second) {
                cout << vitem << " ";
            }
            cout << endl;
        }
    }
};

#endif // GRAPH_H
