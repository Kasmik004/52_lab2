#ifndef STACK_H
#define STACK_H

class Stack
{
public:
    virtual void push(int item) = 0;
    virtual int pop() = 0;
    virtual int top() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual ~Stack() {}
};

#endif
