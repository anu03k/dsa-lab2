#include <iostream>
#include "./include/stack.h"
#include "./include/arraystack.h"
#include "./include/LinkedStack.h"

using namespace std;
int main()
{

    ArrayStack stack;
    cout << "value of top is :" << stack.top();
    cout << endl;

    stack.push(1);
    cout << "1 pushed" << endl;
    stack.push(2);
    cout << "2 pushed" << endl;
    stack.push(3);
    cout << "3 pushed" << endl;
    stack.push(4);
    cout << "4 pushed" << endl;
    stack.push(5);
    cout << "5 pushed" << endl;
    stack.push(6);
    //cout << "6 pushed" << endl;
    cout << "value of top is :" << stack.top();
    cout<<endl;
    stack.pop();

    stack.pop();

    stack.pop();

    stack.pop();
    stack.pop();
    stack.pop();
    
    cout << "value of top is :" << stack.top();
    cout<<endl;


cout<<"stack implementation using linked list: \n";
 LinkedStack list;
  cout << "value of top is :" << list.top()<<endl;
list.push(1);
  cout<<"1 pushed";
 list.push(2);
  cout << "2 pushed" << endl;
  list.push(3);
  cout << "3 pushed" << endl;
  
  list.push(4);
  cout << "4 pushed" << endl;
  list.push(5);
  cout << "5 pushed" << endl;
  list.push(6);
  
  
  list.pop();
  list.pop();
   cout << "value of top is :" << list.top();
  

 


}