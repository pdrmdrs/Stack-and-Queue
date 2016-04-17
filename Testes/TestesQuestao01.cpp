#include <iostream>
#include "Testes.h"

#include "../Questoes/Questao01/Questao01.h"

using namespace std;


/**
*
*	Stack Tests
*
*/
bool testStackCreate(){

	cout << "\tInitializing testStackCreate()" << endl;

	bool result = true;

	int size = 10;

	Stack stack = stackCreate(size);
	if(stack == NULL){
		cerr << "\t\tERROR - stackCreate() returned NULL when should return 'stack'." << endl;

		result = false;
		return result;
	}

	if(stack->size != 0){
		cerr << "\t\tERROR - The stack->size is '"<< stack->size << "' when should be '0'." << endl;

		result = false;
		return result;
	}

	if(stack->top != NULL){
		cerr << "\t\tERROR - The stack->top is '"<< stack->top << "' when should be '"<< NULL <<"'." << endl;

		result = false;
		return result;
	}

	if(stack->isEmpty != true){
		cerr << "\t\tERROR - The stack->isEmpty is '"<< stack->isEmpty << "' when should be '"<< true <<"'." << endl;

		result = false;
		return result;
	}

	cout << "\tFinished testStackCreate()" << endl;

	return result;
}


bool testPush(){

	cout << "\tInitializing testPush()" << endl;

	int testArray[10] = {11,22,33,44,55,66,77,88,99,00};
	int size = 10;

	Stack stack = stackCreate(size);

	for(int i = 0; i < size; i++){//add elements to the stack and check if they are placed correctly

		int sizeBefore = stack->size;

		int pushedElement = testArray[i];

		push(stack, testArray[i]);

		if(stack->top != pushedElement){
			cerr << "\t\tERROR - The element pushed is different from the element on the top of the stack." << endl;
			cerr << "\t\t\tThe element pushed was '" << pushedElement << "' when the element on top of the stack is '" << stack->top << "'." << endl;

			return false;
		}

		if(stack->size != (i+1)){
			cerr << "\t\tERROR - The size wasn't correctly incremented." << endl;
			cerr << "\t\t\tThe correct size should be '" << (i+1) << "', but the actual size is '" << sizeBefore << "'." << endl;

			return false;
		}
	}

	cout << "\tFinished testPush()" << endl;

	return true;
}

bool testPop(){

	cout << "\tInitializing testPop()" << endl;

	int testArray[10] = {11,22,33,44,55,66,77,88,99,00};
	int size = 10;

	Stack stack = stackCreate(size);

	for(int i = 0; i < size; i++){//add elements to the stack
		push(stack, testArray[i]);
	}

	for(int i = size-1; i >= 0; i--){//remove then and check if the element removed was the correct one
		int elementPopped = pop(stack);

		if(elementPopped != testArray[i]){
			cerr << "\t\tERROR - The element popped is different from the element on the top of the stack." << endl;
			cerr << "\t\t\tThe element popped was '" << elementPopped << "' when should be '" << testArray[i] << "'." << endl;

			return false;
		}

		int sizeAfter = stack->size;

		if(sizeAfter != i){
			cerr << "\t\tERROR - The size wasn't correctly decremented." << endl;
			cerr << "\t\t\tThe correct size should be '" << i-2 << "', but the actual size is '" << sizeAfter << "'." << endl;

			return false;
		}
	}

	cout << "\tFinished testPop()" << endl;

	return true;
}

bool testStackDestroy(){

	cout << "\tInitializing testStackDestroy()" << endl;

	int testArray[10] = {11,22,33,44,55,66,77,88,99,00};
	int size = 10;

	Stack stack = stackCreate(size);

	for(int i = 0; i < size; i++){//add elements to the stack
		push(stack, testArray[i]);
	}

	stackDestroy(stack);

	//if( stack != 0 ){
	//	cerr << "\t\tERROR - Stack not destroyed correctly." << endl;

	//	return false;
	//}

	cout << "\tFinished testStackDestroy()" << endl;

	return true;
}