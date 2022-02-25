#ifndef QUEUE_H
#define QUEUE_H


struct Node
{
	int info;
	Node* next;
};

class Queue
{
public:
	Queue();
	~Queue();

    void enQueue(int info_); // Adds item to the queue
    void deQueue(); // Deletes the first element in the queue

	void MakeEmpty(); // Initializes queue to empty state
	bool IsFull(); // Determines whether queue is full.
	bool IsEmpty(); // Determines if the queue is empty


private:
	Node* front; // A pointer to the first item in the queue 
	Node* back; // A pointer to the last position in the queue
};

#endif // !QUEUE_H