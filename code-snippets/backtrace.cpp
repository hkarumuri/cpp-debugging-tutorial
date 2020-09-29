//Debugger Tutorial: Program Execution
//September 29, 2020

#include <iostream>
using namespace std;

void method4() {
  cout << "in method4" << endl;
}

void method3() {
  cout << "in method3" << endl;
  method4();
}

void method2() {
  cout << "in method2" << endl;
  method3();
}

void method1() {
  cout << "in method1" << endl;
  method2();
}


int main() {
  method1();
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
