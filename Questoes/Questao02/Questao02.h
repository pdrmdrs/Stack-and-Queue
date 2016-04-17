struct tpQueue {
	int top;
	int bottom;
	int peek;
	int size;
	int maxSize;
	bool isEmpty;
	int *contents;
};

typedef tpQueue * Queue;

Queue queueCreate(int);

void queueDestroy(Queue);

bool queueElement(Queue, int);

int dequeue(Queue);