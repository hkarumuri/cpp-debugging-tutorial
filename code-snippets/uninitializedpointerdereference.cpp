#include <iostream>
#include "Node.h"
int main() {
    Node* n;
    int num= n->value; 
    //The value stored in num should be a garbage value, since the pointer n was never initialized. 
    cout<<"The value in the uninitialized Node is "<<num<<endl;
    return 0;
}
