#include <iostream>
#include "src/Stack_LinkedList.h"
#include "src/Queue_LinkedList.h"
#include "src/ArrayQueue.h"
#include "src/ArrayStack.h"

using namespace std;

// Stack Implementation
int main()
{
    Stack_LinkedList s;
    s.push(4);
    cout << s.top();
    cout << s.pop();
}