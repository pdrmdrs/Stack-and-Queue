#include <iostream>
#include "Questao01.h"

Stack stackCreate(int size){
	Stack *stack = new Stack;

	if(Stack == NULL){
		return NULL;
	}else if(size == 0){
		return NULL;
	}else if(stack){
		Stack->size = size;
		Stack->top = NULL;
		Stack->isEmpty = true;
	}

	return stack;
}