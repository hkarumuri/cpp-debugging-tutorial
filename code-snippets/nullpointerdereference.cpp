#include <iostream>
#include "Node.h"
int main() {
    Node* n=NULL;
    //This should result in a Segmentation fault
    int num= n->value; 
    cout<<"The value in the Node is "<<num<<endl;
    return 0;
}
