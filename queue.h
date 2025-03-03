#ifndef QUEUE_H
#define QUEUE_H
#include "list.h"

class Queue {
 public:
  Queue(List* list);
  void enQueue(Node* newNode);
  Node* deQueue();
  void print();
 private:
  List* queue;
};

#endif
