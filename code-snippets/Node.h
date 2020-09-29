#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
class Node{

    public:
        Node();
        void examplefunction();

    private:
        Node* next;
        int value;
};
#endif