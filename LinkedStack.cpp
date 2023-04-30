
#include "LinkedStack.h"
//#include "arraystack.h"

#include <iostream>
using namespace std;

bool LinkedStack::IsFull()
{
   
    return 0; //since list is never empty
}

void LinkedStack::push(int a){
  LinkedStack *newNode = new LinkedStack(a, HEAD);
    HEAD = newNode;


}

int  LinkedStack::pop()
{
    
    
    if (HEAD == TAIL) // if only one node
    {
        LinkedStack *temp;
        temp = HEAD;
        HEAD = nullptr;
        TAIL = nullptr;
        delete temp;
    }
    else {
        LinkedStack *temp;
        temp = HEAD;
        HEAD = HEAD->next;
        delete temp;
    }


}


bool LinkedStack::IsEmpty()
{
     if (HEAD == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}






int LinkedStack::top(){
     if (!IsEmpty())
    {
        return (HEAD->data);
    }
    else
        return 0;
     

}

