#include <iostream>
#include "Testes.h"

#include "../Questoes/Questao02/Questao02.h"

using namespace std;


/**
*
*	Queue Tests
*
*/
bool testQueueCreate(){

	cout << "\tInitializing testQueueCreate()" << endl;

	bool result = true;

	int size = 10;

	Queue queue = queueCreate(size);
	if(queue == NULL){
		cerr << "\t\tERROR - queueCreate() returned NULL when should return 'stack'." << endl;

		result = false;
		return result;
	}

	if(queue->size != 0){
		cerr << "\t\tERROR - The queue->size is '"<< queue->size << "' when should be '0'." << endl;

		result = false;
		return result;
	}

	if(queue->top != NULL){
		cerr << "\t\tERROR - The queue->top is '"<< queue->top << "' when should be '"<< NULL <<"'." << endl;

		result = false;
		return result;
	}

	if(queue->bottom != NULL){
		cerr << "\t\tERROR - The queue->bottom is '"<< queue->bottom << "' when should be '"<< NULL <<"'." << endl;

		result = false;
		return result;
	}

	if(queue->peek != NULL){
		cerr << "\t\tERROR - The queue->peek is '"<< queue->peek << "' when should be '"<< NULL <<"'." << endl;

		result = false;
		return result;
	}

	if(queue->isEmpty != true){
		cerr << "\t\tERROR - The queue->isEmpty is '"<< queue->isEmpty << "' when should be '"<< true <<"'." << endl;

		result = false;
		return result;
	}

	cout << "\tFinished testQueueCreate()" << endl;

	return result;
}


bool testQueue(){

	cout << "\tInitializing testQueue()" << endl;

	int testArray[10] = {11,22,33,44,55,66,77,88,99,00};
	int size = 10;

	Queue queue = queueCreate(size);

	for(int i = 0; i < size; i++){//add elements to the queue and check if they are placed correctly

		int sizeBefore = queue->size;

		int queuedElement = testArray[i];

		queueElement(queue, testArray[i]);

		if(queue->peek != queuedElement){
			cerr << "\t\tERROR - The element queueed is different from the element on the top of the queue." << endl;
			cerr << "\t\t\tThe element queueed was '" << queuedElement << "' when the element on top of the queue is '" << queue->peek << "'." << endl;

			return false;
		}

		if(queue->size != (i+1)){
			cerr << "\t\tERROR - The size wasn't correctly incremented." << endl;
			cerr << "\t\t\tThe correct size should be '" << (i+1) << "', but the actual size is '" << sizeBefore << "'." << endl;

			return false;
		}

		if(queue->bottom != 0){
			cerr << "\t\tERROR - The bottom wasn't correctly implemented." << endl;
			cerr << "\t\t\tThe correct bottom should be '" << 0 << "', but the actual bottom is '" << queue->bottom << "'." << endl;

			return false;
		}

		if(queue->top != i){
			cerr << "\t\tERROR - The top wasn't correctly implemented." << endl;
			cerr << "\t\t\tThe correct top should be '" << i << "', but the actual top is '" << queue->top << "'." << endl;

			return false;
		}
	}

	cout << "\tFinished testQueue()" << endl;

	return true;
}

bool testDequeue(){

	cout << "\tInitializing testDequeue()" << endl;

	int testArray[10] = {11,22,33,44,55,66,77,88,99,00};
	int size = 10;

	Queue queue = queueCreate(size);

	for(int i = 0; i < size; i++){//add elements to the queue
		queueElement(queue, testArray[i]);
	}

	for(int i = 0; i < size; i++){//remove then and check if the element removed was the correct one

		int sizeBefore = queue->size;

		int elementQueued = dequeue(queue);

		if(elementQueued != testArray[i]){
			cerr << "\t\tERROR - The element dequeued is different from the element on the top of the queue." << endl;
			cerr << "\t\t\tThe element dequeued was '" << elementQueued << "' when should be '" << testArray[i] << "'." << endl;

			return false;
		}

		int sizeAfter = queue->size;

		if(sizeBefore != (sizeAfter+1)){
			cerr << "\t\tERROR - The size wasn't correctly decremented." << endl;
			cerr << "\t\t\tThe correct size should be '" << 10-i << "', but the actual size is '" << sizeAfter << "'." << endl;

			return false;
		}

	}

	cout << "\tFinished testDequeue()" << endl;

	return true;
}

bool testQueueDestroy(){

	cout << "\tInitializing testQueueDestroy()" << endl;

	/**int testArray[10] = {11,22,33,44,55,66,77,88,99,00};
	int size = 10;

	Stack stack = stackCreate(size);

	for(int i = 0; i < size; i++){//add elements to the stack
		push(stack, testArray[i]);
	}

	stackDestroy(stack);

	//if( stack != 0 ){
	//	cerr << "\t\tERROR - Stack not destroyed correctly." << endl;

	//	return false;
	//}*/

	cout << "\tFinished testQueueDestroy()" << endl;

	return true;
}