#include <iostream>
#include <stdlib.h>
#include "Questao01.h"

Stack stackCreate(int size){
	Stack stack = (Stack)malloc(sizeof(tpStack));

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