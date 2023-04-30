#include "stack.h"

class LinkedStack : public Stack
{
private:
    LinkedStack *HEAD, *TAIL;
    int data;
    LinkedStack *next;

public:
    LinkedStack(){
    HEAD = nullptr;
    TAIL= nullptr;
    }               // default constructor
    LinkedStack(int a) : data(a), next(nullptr) {}                     
   LinkedStack (int a , LinkedStack *next){
           data = a; 
           this->next = next;
   }

    ~LinkedStack() {}

  
    bool IsFull();
    bool IsEmpty();
    void push(int);
    int pop();
    int top();
   
};