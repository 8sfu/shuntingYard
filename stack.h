#ifndef STACK_H
#define STACK_H
#include "list.h"

class Stack : public List {
 public:
  Stack(List* list);
  void push(Node* newNode);
  Node* peek();
  Node* pop();
  void print();
 private:
  List* stack;
};

#endif
