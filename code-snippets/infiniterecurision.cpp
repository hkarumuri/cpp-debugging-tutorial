//Debugger Tutorial: Program Execution
//September 29, 2020

#include "Node.h"
#include <iostream>
using namespace std;

void infiniteRecurision() {
  if(true){
      cout << "this totally works" << endl;
      infiniteRecurision();
  }
}

void infiniteRecurisionNode(Node* x) {
  if(true){
      infiniteRecurisionNode(x -> next);
  }
}

int main() {
  Node* theNode = new Node();
  theNode -> next = theNode;
  infiniteRecurisionNode(theNode);
  //infiniteRecurision();
  return 0;
}

/*Steps*/
// $ clang++ Node.cpp infiniterecurision.cpp
// $ /a.out

//will get segfault. Use up, down, and callback to identify issues