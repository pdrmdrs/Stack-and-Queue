struct tpStack {
	int top;
	int indexTop;
	int size;
	int maxSize;
	bool isEmpty;
	int *contents;
};

typedef tpStack * Stack;

Stack stackCreate(int);

void stackDestroy(Stack);

bool push(Stack, int);

int pop(Stack);