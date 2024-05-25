#include "src/Queue_LinkedList.h"
#include "src/ArrayQueue.h"
#include <iostream>

using namespace std;

int main()
{
    // Using Linked List
    Queue_LinkedList *q = new Queue_LinkedList();
    q->enqueue(4);
    cout << q->front() << endl;
    cout << q->dequeue() << endl;
    if (q->isEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }
    q->enqueue(5);
    q->enqueue(6);
    if (q->isEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << q->front() << endl;
        cout << q->back() << endl;
    }

    // Using Array
    ArrayQueue *a = new ArrayQueue(5);
    a->enqueue(4);
    cout << a->front() << endl;
    cout << a->dequeue() << endl;
    if (a->isEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }
    a->enqueue(5);
    if (a->isEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << a->front() << endl;
    }
    a->enqueue(6);
    a->enqueue(7);
    a->enqueue(8);
    a->enqueue(9);
    a->enqueue(10);
    cout << a->front();
}