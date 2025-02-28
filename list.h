#ifndef LIST_H
#define LIST_H

struct Node {
  Node();
  int getValue();
  Node* getNext();
  void setNext(Node* newNode);
  void print();
private:
  int value;
  Node* next = nullptr;
};

class List {
 public:
  List();
  void addHead(Node* newNode);
  void addTail(Node* newNode);
  Node* getHead();
  Node* getTail();
  void removeHead();
  void removeTail();

  void print();
  //void setHead(Node* newHead);
 private:
  Node* first;
};

#endif
