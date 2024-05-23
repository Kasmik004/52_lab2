#ifndef ArrayQueue_h
#define ArrayQueue_h

#include "Queue.h"
#include <iostream>

using namespace std;

class ArrayQueue : public Queue
{

private:
    int size;
    int *data;
    int frontIndex = -1;
    int backIndex = -1;

public:
    ArrayQueue(int size) : size(size)
    {
        data = new int[size];
    }
    ~ArrayQueue();

    void enqueue(int item);
    int dequeue();
    int front();
    bool isEmpty();
    bool isFull();
    int back();
};

void ArrayQueue::enqueue(int item)
{
    if (isFull())
    {
        cout << "QueueOverFlow" << endl;
    }
    else
    {
        if (isEmpty())
        {
            frontIndex = 0;
        }
        backIndex++;
        data[backIndex] = item;
    }
}

int ArrayQueue::dequeue()
{
    if (isEmpty())
    {
        cout << "QueueUnderFlow" << endl;
        return -1;
    }
    else
    {
        int temp = data[frontIndex];
        if (frontIndex == backIndex) // if after dequeue queue becomes empty, then change frontIndex and backIndex to -1
        {
            frontIndex = -1;
            backIndex = -1;
        }
        else
        {
            frontIndex++;
        }
        return temp;
    }
}

int ArrayQueue::front()
{
    if (isEmpty())
    {
        cout << "QueueUnderFlow" << endl;
        return -1;
    }
    else
    {
        return data[frontIndex];
    }
}

bool ArrayQueue::isEmpty()
{
    return (frontIndex == -1);
}

bool ArrayQueue::isFull()
{
    return (backIndex == size - 1);
}

int ArrayQueue::back()
{
    if (isEmpty())
    {
        cout << "QueueUnderFlow" << endl;
        return -1;
    }
    else
    {
        return data[backIndex];
    }
}

ArrayQueue::~ArrayQueue()
{
    delete[] data;
}

#endif