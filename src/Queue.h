class Queue
{
public:
    virtual void enqueue(int item) = 0;
    virtual int dequeue() = 0;
    virtual int front() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual int back() = 0;
    virtual ~Queue() {}
};