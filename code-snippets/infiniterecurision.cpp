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
      infiniteRecurision(x -> next);
  }
}

int main() {
  Node* theNode = new Node();
  theNode -> next = theNode;
  infiniteRecurisionNode();
  //infiniteRecurision();
  return 0;
}

/*Steps*/
// 1) Run this to see what happens (in terminal, not debugger)
// 2) compile with -Wall and -g flags, start lldb debugger
// 3) Have it run all the way through, point out the exit code
// 4) Set up a breakpoint at method 2
// 5) run "bt" to show the backtrace
// 6) run "f" to see the source code
// 7) Run "bt" again just to get back to the backtrace
// 8) run "up" to see it go up the stack
// 9) run "down" to go back where you just were
// 11) run "step" again to step into method 2
// 12) run "step" to step into method3
// 13) run "next" to go over the cout statement
// 14) run "continue" to go through the rest
// 15) run "quit" to end
