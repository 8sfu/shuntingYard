#include <iostream>
#include "queue.h"

using namespace std;

Queue::Queue(List* list){
  queue = list;
}

void Queue::enQueue(Node* newNode){
  queue->addTail(newNode);
}

Node* Queue::deQueue(){
  Node* temp = queue->getTail();
  queue->removeTail();
  return temp;
}

void Queue::print(){
  if(queue->getHead() != nullptr){
    cout << "Queue:  " << endl;
    queue->print();
  }
}
