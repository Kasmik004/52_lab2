#ifndef Stack_LinkedList_H
#define Stack_LinkedList_H

#include "LinkedList.h"
#include "Stack.h"
#include <iostream>

using namespace std;

class Stack_LinkedList : public Stack
{
public:
    Stack_LinkedList();
    ~Stack_LinkedList();

    void push(int item);
    int pop();
    int top();
    bool isEmpty();
    bool isFull();

private:
    LinkedList *stack;
};

Stack_LinkedList::Stack_LinkedList()
{
    stack = new LinkedList();
}

Stack_LinkedList::~Stack_LinkedList()
{
    delete stack;
}

int Stack_LinkedList::top()
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

void Stack_LinkedList::push(int item)
{
    stack->addToHead(item);
}

int Stack_LinkedList::pop()
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

bool Stack_LinkedList::isEmpty()
{
    return (stack->isEmpty());
}

bool Stack_LinkedList::isFull()
{
    return false; // because linked list can't be full
}

#endif