#ifndef STACK_H
#define STACK_H
#include "list.h"

class Stack {
 public:
  Stack(List* list);
  void push(Node* newNode);
  Node* peek();
  Node* pop();
  void print();
  ~Stack();
 private:
  List* stack;
};

#endif
