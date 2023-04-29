#include <iostream>
#include "stack.h"
#include "arraystack.h"

using namespace std;

ArrayStack::ArrayStack(){
    topIndex = -1; //initialize top as -1 when  an stack is created

}
ArrayStack::~ArrayStack(){}

//function definatiion
bool ArrayStack ::IsEmpty(){

    if(topIndex == -1){return true;}
    else return false;
}

bool ArrayStack::IsFull(){
    if(topIndex == MAX_SIZE-1)
    {
        return true;
    }
    else return false;
}
//pop function - remove top element

int ArrayStack ::pop(){
    if(!this->IsEmpty())
    {
        int popItem = data[topIndex];
        topIndex --;
        cout<<popItem<<" poppped \n";
        
        return popItem;
    }
    else{
        cout<<"Stack empty \n";
        return 0 ;
    }
}
 void ArrayStack::push(int item){
if(!this->IsFull()){
    topIndex++;
    data[topIndex] = item;
}
else if(this->IsFull()){
    cout<<"stack full \n";
}
 }
 int ArrayStack::top(){
    return topIndex;
 }
