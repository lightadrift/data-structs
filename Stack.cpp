// stack array implemantation

#include <cstdio>
using namespace std;

#define MAX_SIZE 101

class Stack {
private:
  int A[MAX_SIZE];
  int top;

public:
  Stack() { top = 1; }
  void Push(int value) {
    if (top == MAX_SIZE - 1) {
      printf("error overflow");
      return;
    }
    // top + 1 is the new value in the array
    A[++top] = value;
  }

  void Pop() {
    if (top == -1) {
      printf("error no element in the stack");

      return;
    }
    top--;
  }

  int Top() { return A[top]; }

  int IsEmpty() {
    if (top == -1)
      return 1;
    return 0;
  }
  // print the elements in the stack
  void Print() {
    int o;
    printf("stack:");
    for (o = 0; o <= top; o++) {
      printf("%d", A[o]);
      printf("\n");
    }
  }
};

int main() { return 0; }
