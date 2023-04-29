#ifndef ArrayStack_h
#define ArrayStack_h

#include "stack.h"

#define MAX_SIZE 5

class ArrayStack: public Stack{
public:
    ArrayStack();
    ~ArrayStack();

   void push(int item);
    int pop();
     bool IsEmpty();
     bool IsFull();
     int top();

private:
int data[MAX_SIZE];
int topIndex;

};

#endif