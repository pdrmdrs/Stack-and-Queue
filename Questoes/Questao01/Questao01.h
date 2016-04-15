//pilha

/*

create
destroy
push
pop
top
isEmpty
size

*/

typedef struct tpStack {
	int top;
	int size;
	bool isEmpty;
} Stack;

Stack stackCreate(int size);