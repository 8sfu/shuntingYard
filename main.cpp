#include <iostream>
#include <cstring>
#include "stack.h"


using namespace std;

bool cmp(char* input, const char* checkAgainst){ //simplify input to cstring comparison
  if(!strcmp(input,checkAgainst)){
    return true;
  }
  return false;
}

int main(){
  char* input = new char[10];
  Stack* stack = new Stack(new List());
  
  while(true){
    cout << "enterc" << endl;
    cin.getline(input,20);
      
    if(cmp(input,"push")){
      cout << "pushing" << endl;
      Node* pushedNode = new Node();
      stack->push(pushedNode);
      cout << "pushed value was " << pushedNode->getValue() << endl;
      stack->print();
      
    }else if(cmp(input,"pop")){
      cout << "popping" << endl;
      Node* poppedNode = stack->pop();
      if(poppedNode != nullptr){
	cout << "popped value was " << poppedNode->getValue() << endl;
	stack->removeHead();
	stack->print();
      }
      
    }else if(cmp(input,"peek")){
      cout << "peeking" << endl;
      Node* peekedNode = stack->peek();
      cout << "peeked value was " << peekedNode->getValue() << endl;
      stack->print();
      
    }else if(cmp(input,"quit")){
      cout << "quitting" << endl;
      return 0;
      
      
    }
    cout << endl;
  }
  
  return 0;
}
