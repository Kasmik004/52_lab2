#ifndef Queue_LinkedList_h
#define Queue_LinkedList_h

#include "Queue.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;

class Queue_LinkedList : public Queue
{
private:
    LinkedList *queue;

public:
    Queue_LinkedList()
    {
        queue = new LinkedList();
    }

    ~Queue_LinkedList()
    {
        delete queue;
    }

    void enqueue(int item);
    int dequeue();
    int front();
    bool isEmpty();
    bool isFull();
    int back();
};

void Queue_LinkedList::enqueue(int item)
{
    queue->addToTail(item);
}

int Queue_LinkedList::dequeue()
{
    if (isEmpty())
    {
        cout << "QueueUnderFlow" << endl;
        return -1;
    }
    else
    {
        int temp = queue->getHeadElement();
        queue->deleteFromHead();
        return temp;
    }
}

int Queue_LinkedList::front()
{
    if (!queue->isEmpty())
    {
        return queue->getHeadElement();
    }
    else
    {
        return -1; // -1 refers to an undesired output
    }
}

bool Queue_LinkedList::isEmpty()
{
    return queue->isEmpty();
}

bool Queue_LinkedList::isFull()
{
    return false;
}

int Queue_LinkedList::back()
{
    if (!queue->isEmpty())
    {
        return queue->getTailElement();
    }
    else
    {
        return -1; // -1 refers to an undesired output
    }
}

#endif
