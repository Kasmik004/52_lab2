#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"
#include "ArrayStack.h"
#include <iostream>

using namespace std;

class Stack : public ArrayStack
{
public:
    Stack();
    ~Stack();

    void push(int item);
    int pop();
    int top();
    bool isEmpty();

private:
    LinkedList *stack;
};

Stack::Stack()
{
    stack = new LinkedList();
}

Stack::~Stack()
{
    delete stack;
}

int Stack::top()
{
    if (!(stack->isEmpty()))
    {

        return (stack->getHeadElement());
    }
    else
    {
        cout << "StackOverFlow" << endl;
        return -1; //-1 refers to undersied output
    }
}

void Stack::push(int item)
{
    stack->addToTail(item);
}

int Stack::pop()
{
    int temp = top();
    if (temp == -1)
    {
        cout << "StackOverFlow" << endl;
        return -1;
    }
    stack->deleteFromHead();
    return temp;
}

bool Stack::isEmpty()
{
    return (stack->isEmpty());
}

#endif