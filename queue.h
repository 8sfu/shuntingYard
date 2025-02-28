#ifndef QUEUE_H
#define QUEUE_H
#include "list.h"

class Queue : public List {
 public:
  Queue(List* list);
  void enQueue(Node* newNode);
  Node* deQueue();
 private:
  List* queue;
}

#endif
