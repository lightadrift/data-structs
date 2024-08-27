// stack array implemantation

#include "Stack.h"
#include <cstdio>
using namespace std;

void Stack::Push(int value) {
  if (top == MAX_SIZE - 1) {
    printf("error overflow");
    return;
  }
  // top + 1 is the new value in the array
  A[++top] = value;
};

void Stack::Pop() {
  if (top == -1) {
    printf("error no element in the stack");

    return;
  }
  top--;
};

int Stack::Top() { return A[top]; };

int Stack::IsEmpty() {
  if (top == -1) {
    return 1;
  }
  return 0;
}

void Stack::Print() {
  int o;
  printf("stack:");
  for (o = 0; o <= top; o++) {
    printf("%d", A[o]);
    printf("\n");
  }
}
