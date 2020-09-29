#include <iostream>
#include "Node.h"
int main() {
    Node* n;
    n->value= 3;
    delete n;
    int num= n->value;
    //This may or may not cause a segmentation fault
    cout<<"The value in the deleted Node is "<<num<<endl;
    return 0; 
}
