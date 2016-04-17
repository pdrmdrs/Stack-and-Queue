#include <iostream>
#include "Testes.h"

#include "../Questoes/Questao01/Questao01.h"

using namespace std;

bool testStackCreate(){

	cout << "Started testStackCreate()" << endl;

	bool result = true;

	int size = 10;

	Stack stack = stackCreate(size);
	if(stack == NULL){
		cerr << "\tERROR - stackCreate() returned NULL when should return 'stack'." << endl;

		result = false;
		return result;
	}

	if(stack->size != size){
		cerr << "\tERROR - The stack->size is '"<< stack->size << "' when should be '"<< size <<"'." << endl;

		result = false;
		return result;
	}

	if(stack->top != NULL){
		cerr << "\tERROR - The stack->top is '"<< stack->top << "' when should be '"<< NULL <<"'." << endl;

		result = false;
		return result;
	}

	if(stack->isEmpty != true){
		cerr << "\tERROR - The stack->isEmpty is '"<< (bool)stack->isEmpty << "' when should be '"<< (bool)true <<"'." << endl;

		result = false;
		return result;
	}

	cout << "Finished testStackCreate()" << endl;

	return result;
}