#include <iostream>
#include <cstring>
#include "stack.h"
#include "queue.h"

using namespace std;

bool cmp(char* input, const char* checkAgainst){ //simplify input to cstring comparison
  if(!strcmp(input,checkAgainst)){
    return true;
  }
  return false;
}

int main(){
  char* input = new char[10];

  while(true){
    cout << "enterc" << endl;
    cout << "Would you like to create a stack or queue or quit?" << endl;
    cin.getline(input,10);

    if(cmp(input,"stack")){
      Stack* stack = new Stack(new List());
      
      bool stackLoop = true;
      while(stackLoop){
	cout << "you can - push, pop, peek, print, wipe, print, menu, or quit" << endl;
	cin.getline(input,10);
	if(cmp(input,"push")){
	  Node* pushedNode = new Node();
	  stack->push(pushedNode);
	  cout << "pushed value was " << pushedNode->getValue() << endl;
	  stack->print();
	
	}else if(cmp(input,"pop")){
	  Node* poppedNode = stack->pop();
	  if(poppedNode != nullptr){
	    cout << "popped value was " << poppedNode->getValue() << endl;
	    stack->print();
	  }
	  
	}else if(cmp(input,"peek")){
	  Node* peekedNode = stack->peek();
	  cout << "peeked value was " << peekedNode->getValue() << endl;
	  stack->print();
	  
	}else if(cmp(input,"print")){
	  stack->print();
	  
	}else if(cmp(input,"wipe")){
	  stack = new Stack(new List());
	  
	}else if(cmp(input,"menu")){
	  stackLoop = false;
	 	  
	}else if(cmp(input,"quit")){
	  return 0;

	}
      }
    }else if(cmp(input,"queue")){
      Queue* queue = new Queue(new List());
      bool queueLoop = true;
            
      while(queueLoop){
	cout << "you can - enqueue, dequeue, print, wipe, menu, or quit" << endl;
	cin.getline(input,20);
	if(cmp(input,"enqueue")){
       	  queue->enQueue(new Node());
	}else if(cmp(input,"dequeue")){
	  Node* dequeuedNode = queue->deQueue();
	}else if(cmp(input,"print")){
	  queue->print();
	}else if(cmp(input,"wipe")){
	  queue = new Queue(new List());
	}else if(cmp(input,"menu")){
	  queueLoop = false;
	}else if(cmp(input,"quit")){
	  return 0;
	  
	}
      }
    }else if(cmp(input,"quit")){
      return 0;
    }
    cout << endl;
  }
  
  return 0;
}
