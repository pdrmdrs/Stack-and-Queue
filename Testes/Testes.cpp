#include <iostream>
#include "Testes.h"

#include "../Questoes/Questao01/Questao01.h"

using namespace std;

bool testStackCreate(){

	cout << "Started testStackCreate()" << endl;

	bool result = true;

	Stack stack = stackCreate(10);
	if(stack == NULL){
		cerr << "\tERROR - stackCreate() returned NULL when should return 'stack'." << endl;

		result = false;
		return result;
	}

	return result;
}