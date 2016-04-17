#include <iostream>
#include <string.h>

#include "Questoes/Questao01/Questao01.h"
#include "Questoes/Questao02/Questao02.h"

#include "Testes/Testes.h"

using namespace std;

int main(int argc, const char * argv[]){

	if(argc > 1){
		if(strcmp(argv[1], "1") == 0){//question 1
			cout << "Question 01:" << endl;
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
		}

		if(strcmp(argv[1], "2") == 0){//question 2
			cout << "Question 02:" << endl;
			cout << "Initializing tests..." << endl;

			bool passed = true;

			passed = testQueueCreate();

			if(passed)
				passed = testQueue();

			if(passed)
				passed = testDequeue();

			if(passed)
				passed = testQueueDestroy();

			cout << "Tests finished without errors." << endl;
		}

		if(strcmp(argv[1], "3") == 0){//question 3
			cout << "Question 03:" << endl;
		}

		if(strcmp(argv[1], "4") == 0){//question 4
			cout << "Question 04:" << endl;
		}

		if(strcmp(argv[1], "5") == 0){//question 5
			cout << "Question 05:" << endl;
		}
	}

	return 0;
}