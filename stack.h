#ifndef Stack_h
#define Stack_h

class Stack
{
public:
    Stack(){};
    ~Stack(){};
    virtual void push(int item) = 0;
    virtual int pop() = 0;
    virtual bool IsEmpty() = 0;
    virtual bool IsFull() = 0;
    virtual int top() = 0;

};

#endif