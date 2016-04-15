#include <iostream>
#include "Questao01.h"

Stack * stackCreate(int size){
	Stack * stack;
	stack = new Stack;

	if(size == 0){
		return NULL;
	}else if(stack == NULL){
		return NULL;
	}else if(stack){
		stack->size = size;
		stack->top = NULL;
		stack->isEmpty = true;
	}

	return stack;
}