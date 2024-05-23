#ifndef ArrayStack_h
#define ArrayStack_h

#include "Stack.h"
#include <iostream>

using namespace std;

class ArrayStack : public Stack
{

public:
    ArrayStack(int size) : size(size)
    {
        data = new int[size];
    }
    ~ArrayStack();

    void push(int item);
    int pop();
    int top();
    bool isEmpty();
    bool isFull();

private:
    int size;
    int *data;
    int topIndex = -1;
};

void ArrayStack::push(int item)
{
    if (isFull())
    {
        cout << "StackOverFlow" << endl;
    }
    else
    {
        topIndex++;
        data[topIndex] = item;
    }
}

int ArrayStack::pop()
{
    if (isEmpty())
    {
        cout << "StackUnderFlow" << endl;
        return -1;
    }
    else
    {
        int temp = data[topIndex];
        topIndex--;
        return temp;
    }
}

int ArrayStack::top()
{
    if (isEmpty())
    {
        cout << "StackUnderFlow" << endl;
        return -1;
    }
    else
    {
        return data[topIndex];
    }
}

bool ArrayStack::isEmpty()
{
    return (topIndex == -1);
}

bool ArrayStack::isFull()
{
    return (topIndex == size - 1);
}

ArrayStack::~ArrayStack()
{
    delete[] data;
}

#endif