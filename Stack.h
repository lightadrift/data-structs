#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 101

class Stack {
private:
  int A[MAX_SIZE];
  int top;

public:
  Stack() { top = 1; }
  void Push(int value);
  void Pop();
  int Top();
  int IsEmpty();
  void Print();
};

#endif
