#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

struct Node
{
public:
    int info;
    Node *next;
};

class LinkedList
{
private:
    Node *HEAD;
    Node *TAIL;

public:
    LinkedList()
    {
        HEAD = nullptr;
        TAIL = nullptr;
    }

    ~LinkedList() {}

    void add(Node *pred, int data);
    void addToHead(int data);
    void addToTail(int data);
    void deleteFromHead();
    void deleteFromTail();
    void just_delete(Node *pred);
    bool isEmpty();
    bool search(int data);
    Node *getHead();
    Node *getTail();
    void traversal();
    int getHeadElement();
    int getTailElement();
    void print()
    {
        cout << "\nHead: " << HEAD->info;
        cout << "\nTail: " << TAIL->info;
    }
};

void LinkedList::add(Node *pred, int data)
{
    Node *temp = new Node();
    temp->info = data;
    temp->next = pred->next;
    pred->next = temp;
}

void LinkedList::addToHead(int data)
{
    Node *temp = new Node();
    temp->info = data;
    temp->next = HEAD;
    HEAD = temp;
    if (temp->next == nullptr)
    {
        TAIL = temp;
    }
}

void LinkedList::addToTail(int data)
{
    Node *temp = new Node();
    temp->info = data;
    temp->next = nullptr;
    if (TAIL != nullptr)
    {
        TAIL->next = temp;
    }
    TAIL = temp;
    if (HEAD == nullptr)
    {
        HEAD = temp;
    }
}

void LinkedList::deleteFromHead()
{
    if (HEAD == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }

    if (HEAD->next == nullptr)
    {
        HEAD = TAIL = nullptr;
    }
    else
    {
        Node *NodeToDelete = HEAD;
        HEAD = NodeToDelete->next;
        delete NodeToDelete;
    }
}

void LinkedList::deleteFromTail()
{

    if (HEAD == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }

    if (TAIL == HEAD)
    {
        delete TAIL;
        HEAD = TAIL = nullptr;
    }
    else
    {
        Node *p = HEAD;
        while (p->next != TAIL)
        {
            p = p->next;
        }
        delete TAIL;
        p->next = nullptr;
        TAIL = p;
    }
}

void LinkedList::just_delete(Node *pred)
{
    if (pred == nullptr || pred->next == nullptr)
    {
        return;
    }

    Node *temp = pred->next;
    pred->next = temp->next;
    delete temp;
}

bool LinkedList::isEmpty()
{
    return (HEAD == nullptr);
}

bool LinkedList::search(int data)
{
    Node *current = HEAD;
    while (current != nullptr)
    {
        if (current->info == data)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}

Node *LinkedList::getHead()
{
    return HEAD;
}

Node *LinkedList::getTail()
{
    return TAIL;
}

void LinkedList::traversal()
{
    Node *p = HEAD;
    while (p != nullptr)
    {
        cout << p->info << " ";
        p = p->next;
    }
}

int LinkedList::getHeadElement()
{
    return (HEAD->info);
}

int LinkedList::getTailElement()
{
    return (TAIL->info);
}

#endif