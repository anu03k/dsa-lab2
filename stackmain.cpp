#include <iostream>
#include "./include/stack.h"
#include "./include/arraystack.h"

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
}