#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
    Queue q;
    q.enQueue(10);
    q.enQueue(20);
    q.deQueue();
    q.deQueue();
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.deQueue();
    q.enQueue(60);
    cout << q.IsFull();
    cout << q.IsEmpty();
    q.MakeEmpty();
    cout << q.IsEmpty();
}