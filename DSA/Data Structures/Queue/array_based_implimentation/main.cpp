#include <iostream>
#include<bits\stdc++.h>

using namespace std;
class Queue
{
private:
    int* v;
public:
    int head, rear;
    unsigned long capacity, size_;
    Queue(int capacity): capacity(capacity), size_(0)
    {
        this->head = this->size_;
        this->rear= this->capacity-1;
        v= new int[(this->capacity * sizeof(int))];
    }

    bool isfull()
    {
        if (this->size_ == this->capacity)
            return true;
        return false;
    }
    bool isempty()
    {
        if(this->size_ == 0) return true;
        return false;
    }
    void Enqueue(int a)
    {
        if (this->isfull())
        {
            cout << "the queue is full" << endl;
        }
        else
        {
        this->rear= (this->rear+1)%this->capacity;
        v[this->rear]=a;
        this->size_ +=1;
        }
    }
    void Dequeue()
    {
        if(this->isempty() )
        {
        cout  << "This queue is empty" <<endl;
        }
        else
        {
        this->head= (this->head+1)%this->capacity;
        this->size_ -=1;
        }
    }
    string qhead()
    {
        return ( !this->isempty()) ? to_string(v[this->head]) : "empty queue";
    }
    string qrear()
    {
        return ( !this->isempty())? to_string(v[this->rear]) : "empty queue";
    }

    ~Queue()
    {
        delete[] v;
        v=nullptr;
        cout << "array is deleted" << endl;
    }
};

int main()
{
    Queue q(5);
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    cout << q.isempty() << endl;
    cout << q.qhead() << endl;
    cout << q.qrear() << endl;
    q.Dequeue();
    cout << q.isempty() << endl;
    cout << q.qhead() << endl;
    cout << q.qrear()<<endl;
    q.Dequeue();
    cout << q.isempty() << endl;
    cout << q.qhead() << endl;
    cout << q.qrear() << endl;
    return 0;
}
