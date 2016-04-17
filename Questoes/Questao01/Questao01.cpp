#include <iostream>
#include <stdlib.h>
#include "Questao01.h"

using namespace std;

Stack stackCreate(int size){
	Stack stack = (Stack)malloc(sizeof(tpStack));

	if(size == 0){
		return NULL;
	}else if(stack == NULL){
		return NULL;
	}else if(stack){
		stack->size = 0;
		stack->maxSize = size;
		stack->top = NULL;
		stack->isEmpty = true;

		stack->contents = new int[size];

		for(int i = 0; i < size; i++){//fullfill the stack with null elements
			stack->contents[i] = NULL;
		}
	}

	return stack;
}

void stackDestroy(Stack stack){//destroy the stack
	delete stack->contents;

	free(stack);
}

bool push(Stack stack, int content){//push one element to the top of the stack
	if(stack->maxSize > stack->size){
		stack->contents[stack->size] = content;//add the element

		stack->top = content;//refresh the top variable

		stack->size += 1;//refresh the size of the stack

		stack->isEmpty = false;
	}else{
		cout << "The stack is full." << endl;

		return false;
	}

	return true;
}

int pop(Stack stack){//remove one element from the top of the stack

	if(stack->size > 0){
		int poppedElement = stack->contents[stack->size-1];//save the popped element

		stack->contents[stack->size-1] = NULL;//delete the element

		stack->size -= 1;//decrease the size

		if(stack->size == 0){
			stack->top = stack->contents[stack->size-1];//refresh the top
			stack->isEmpty = true;
		}else{
			stack->top = NULL;//refresh the top
			stack->isEmpty = false;
		}
		
		return poppedElement;

	}else{
		cout << "The stack has no elements." << endl;
	}

	return -1;
}