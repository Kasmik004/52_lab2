#ifndef ArrayStack_h
#define ArrayStack_h

class ArrayStack
{

public:
    ArrayStack();
    ArrayStack(int size, int *data) : size(size), data(data) {}
    ~ArrayStack();

    virtual void push(int item) = 0;
    virtual int pop() = 0;
    virtual int top() = 0;
    virtual bool isEmpty() = 0;

private:
    int size;
    int *data;
};

void ArrayStack::push(int item)
{
}

#endif