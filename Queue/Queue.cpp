#include "Queue.h"
#include <new>

Queue::Queue() // Constructor
{
    front = nullptr;
    back = nullptr;
}

Queue::~Queue() // Destructor
{
}

void Queue::enQueue(int info_)
{
    Node* temp = new Node;
    temp->info = info_;

    if (back == nullptr)
    {
        front = back = temp;
        return;
    }

    back->next = temp;
    back = temp;
}

void Queue::deQueue()
{
    if (IsEmpty())
        return;
    else
        if (front == back)
        {
            delete(front);
            front = back = nullptr;
        }
        else
        {
            Node* temp = front;
            front = front->next;
            delete(temp);
        }
}

void Queue::MakeEmpty()
{
    while (front != nullptr)
    {
        if (IsEmpty())
            return;
        else
            if (front == back)
            {
                delete(front);
                front = back = nullptr;
            }
            else
            {
                Node* temp = front;
                front = front->next;
                delete(temp);
            }
    }
}

bool Queue::IsFull()
{
    Node* location;
    try
    {
        location = new Node;
        delete location;
        return false;
    }
    catch (std::bad_alloc& exception)
    {
        return true;
    }
}

bool Queue::IsEmpty()
{
    if (front == nullptr && back == nullptr)
        return true;
    else
        return false;
}