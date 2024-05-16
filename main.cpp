#include <iostream>
#include "src/Stack.h"

using namespace std;

// to check working of linked list
// int main()
// {
//     LinkedList l;
//     l.addToHead(8);
//     // l.print();
//     l.addToTail(7);
//     // l.print();
//     l.deleteFromHead();
//     // l.print();
//     l.addToHead(6);
//     l.addToTail(5);
//     l.traversal();
// }

// Stack Implementation
int main()
{
    Stack s;
    s.push(4);
    cout << s.top();
    cout << s.pop();
}