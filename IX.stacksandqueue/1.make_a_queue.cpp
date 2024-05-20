#include <iostream>

using namespace std;

class MyQueue
{
private:
    int *arr;
    int first{-1}, last{-1}, size{0};

public:
    MyQueue(int size);
    ~MyQueue();
    int size()
    {
        return (last-first);
    }
    int pop()
    {
        int temp = first;
        first++;
        return arr[temp];
    }
    void push(int element)
    {
        if (first == -1){
            first = 0;
            last=0;
            arr[last] = element;}
            else{
        arr[last] = element;
        last++;}
    }
    int top()
    {

        return arr[first];
    }

};

MyQueue::MyQueue(int size)
{
    this->size = size;
    arr = new int[size];
}

MyQueue::~MyQueue()
{
}

int main()
{

    int *arr;

    return 0;
}