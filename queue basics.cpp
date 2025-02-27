#include <iostream>
using namespace std;

const int total_SIZE = 5;  

class Queue {
	int qArray[total_SIZE];
	int front, rear;

public:
	Queue() {
		front = -1;
		rear = -1;
	}

	bool isempty() {
		return front == -1;
	}

	bool isfull() {
		return (rear + 1) % total_SIZE == front;
	}

	void enqueue(int a) {
		if (isfull()) {
			cout << "Q is full unable to add new element " << a << endl;
			return;
		}

		if (front == -1) {  
			front = 0;
		}

		rear = (rear + 1) % total_SIZE;  
		qArray[rear] = a;
		cout << a << " added " << endl;
	}

	void dequeue() {
		if (isempty()) {
			cout << "queue  empty unable to dequeue." << endl;
			return;
		}

		cout << qArray[front] << " dequeued " << endl;
		if (front == rear) {
			front = rear = -1;  
		}
		else {
			front = (front + 1) % total_SIZE;  
		}
	}

	// Return the element  without removing it
	int frontEle() {
		if (isempty()) {
			cout << "queue is empty" << endl;
			return -1;  
		}
		return qArray[front];
	}

	// Display all elements in the queue
	void display() {
		if (isempty()) {
			cout << "queue is empty" << endl;
			return;
		}

		cout << "All elements: ";
		for (int i = front; i != rear; i = (i + 1) % total_SIZE) {
			cout << qArray[i] << " ";
		}
		cout << qArray[rear] << endl;  
	}
};

int main() {
	Queue q;  
	//cout << " Queue status "; 
	//if ((q.isempty()) {
	//	cout << "empty\n";
	//}
	//else
	//	cout << "not empty";
	q.enqueue(5);
	q.enqueue(10);
	q.enqueue(15);
	q.enqueue(20);
	q.enqueue(25);

	q.display();

	// Try to enqueue when the queue is full
	q.enqueue(60);  

					
	q.dequeue();
	q.dequeue();

	// Display the queue again
	q.display();

	cout << "Front element: " << q.frontEle() << endl;

	// dequeue the  elements
	q.dequeue();
	q.dequeue();
	q.dequeue();

	// Check if the queue is empty
	cout << " queue empty status " << (q.isempty() ? "Yes" : "No") << endl;
	system("pause");
	return 0;
}