#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack(List* list){
  stack = list;
}

void Stack::push(Node* newNode){
  stack->addHead(newNode);
}

Node* Stack::peek(){
  return stack->getHead();
}

Node* Stack::pop(){
  Node* temp = stack->getHead();
  stack->removeHead();
  return temp;
}

void Stack::print(){
  if(stack->getHead() != nullptr){
    cout << "Stack:  ";
    stack->print();
  }
}
