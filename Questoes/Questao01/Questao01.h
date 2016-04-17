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

struct tpStack {
	int top;
	int size;
	bool isEmpty;
};

typedef tpStack * Stack;

Stack stackCreate(int);