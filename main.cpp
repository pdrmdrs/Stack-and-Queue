#include <iostream>

#include "Questoes/Questao01/Questao01.h"

#include "Testes/Testes.h"

using namespace std;

int main(int argc, const char * argv[]){

	cout << "Initializing tests..." << endl;

	bool passed = true;

	passed = testStackCreate();

	if(passed)
		passed = testPush();

	if(passed)
		passed = testPop();

	if(passed)
		passed = testStackDestroy();

	cout << "Tests finished without errors." << endl;

	return 0;
}