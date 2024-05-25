#include <iostream>
#include "src/Stack_LinkedList.h"
#include "src/ArrayStack.h"

using namespace std;

int main()
{
    // Using Linked List
    Stack_LinkedList *s = new Stack_LinkedList();
    s->push(4);
    cout << s->top() << endl;
    cout << s->pop() << endl;
    if (s->isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl;
    }
    s->push(5);
    if (s->isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << s->top() << endl;
    }

    // Using Array
    ArrayStack *a = new ArrayStack(5);
    a->push(4);
    cout << a->top() << endl;
    cout << a->pop() << endl;
    if (a->isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl;
    }
    a->push(5);
    if (a->isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << a->top() << endl;
    }
    a->push(6);
    a->push(7);
    a->push(8);
    a->push(9);
    a->push(10);
    cout << a->top();
}