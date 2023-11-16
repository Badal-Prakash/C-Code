#include <iostream>
using namespace std;

// Define stack class
class Stack {
  private:
    int top;
    int items[100];

  public:
    Stack() {
      top = -1;
    }
    void push(int val) {
      if (top >= 99) {
        cout << "Stack Overflow" << endl;
      } else {
        top++;
        items[top] = val;
      }
    }
    int pop() {
      if (top < 0) {
        cout << "Stack Underflow" << endl;
        return 0;
      } else {
        int poppedItem = items[top];
        top--;
        return poppedItem;
      }
    }
};

// Test the stack class
int main() {
  Stack myStack;
  myStack.push(42);
  myStack.push(17);
  cout << myStack.pop() << endl; // prints 17
  cout << myStack.pop() << endl; // prints 42
  cout << myStack.pop() << endl; // prints "Stack Underflow"
  return 0;
}
