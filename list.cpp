#include <iostream>

#include "list.h"

using namespace std;

Node::Node(){
  cout << "What is the new node?" << endl;
  cin >> value;
  cin.ignore();
}

int Node::getValue(){
  return value;
}

Node* Node::getNext(){
  return next;
}

void Node::setNext(Node* newNode){
  next = newNode;
}

void Node::print(){
  cout << value << ",  ";
  if(next != nullptr){
    next->print();
  }
}


List::List(){
  first = nullptr;
}

void List::addHead(Node* newNode){
  newNode->setNext(first);
  first = newNode;
}

void List::addTail(Node* newNode){
  Node* temp = first;
  while(temp->getNext() != nullptr){
    temp = temp->getNext();
  }
  temp->setNext(newNode);
}

Node* List::getHead(){
  if(first != nullptr){
    return first;
  }
}

Node* List::getTail(){
  Node* temp = first;
  while(temp->getNext() != nullptr){
    temp = temp->getNext();
  }
  return temp;
}

void List::removeHead(){
  first = first->getNext();
}

void List::removeTail(){
  Node* temp = first;
  if(first->getNext() == nullptr){
    first = nullptr;
  }
  while(temp->getNext()->getNext() != nullptr){
    temp = temp->getNext();
  }
  temp->setNext(nullptr);
}

void List::print(){
  first->print();
}

/*Node* Node::removeTail(){
  Node* temp;
  if(next == nullptr){
    return this;
  }else if(next->next == nullptr){
    temp = next;
    next = nullptr;
    return temp;
  }else{
    next->removeTail();
  }
}



List::List(){
  cout << "What is the head?" << endl;
  cin >> first->value;
  cin.ignore();
}


Node* List::getHead(){
  return first;
}

Node* List::removeHead(){
  Node* temp = first;
  first = first->next;
  return temp;
}

Node* List::removeTail(){
  return first->removeTail();
}

void List::setHead(Node* newHead){
  newHead->next = first;
  first = newHead;
  }*/

