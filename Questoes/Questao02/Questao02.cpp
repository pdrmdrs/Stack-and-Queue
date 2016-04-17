#include <iostream>
#include <stdlib.h>
#include "Questao02.h"

using namespace std;

Queue queueCreate(int size){
	Queue queue = (Queue)malloc(sizeof(tpQueue));

	if(size == 0){
		return NULL;
	}else if(queue == NULL){
		return NULL;
	}else if(queue){
		queue->size = 0;
		queue->maxSize = size;
		queue->top = 0;
		queue->bottom = 0;
		queue->peek = NULL;
		queue->isEmpty = true;

		queue->contents = new int[size];

		for(int i = 0; i < size; i++){//fullfill the queue with null elements
			queue->contents[i] = NULL;
		}
	}

	return queue;
}

/**void queueDestroy(Queue queue){//destroy the queue
	//delete[] queue->contents;
	delete queue;
	queue = 0;
}*/

bool queueElement(Queue queue, int content){//push one element to the top of the queue
	if(queue->maxSize > queue->size){
		if(queue->size == 0){
			queue->top = 0;//refresh the top variable
			queue->bottom = 0;//the only case when the bottom of the queue is the same of the top
		}else{
			queue->top += 1;
		}
		
		queue->contents[queue->top] = content;//add the element

		queue->peek = content;//refresh the top variable

		queue->size += 1;//refresh the size of the queue
		queue->isEmpty = false;
	}else{
		cout << "The queue is full." << endl;

		return false;
	}

	return true;
}

int dequeue(Queue queue){//remove one element from the bottom of the queue

	if(queue->size > 0){
		int dequeuedElement = queue->contents[queue->bottom];//save the dequeued element

		queue->contents[queue->bottom] = NULL;//delete the element at the bottom of the queue

		queue->size -= 1;//decrease the size

		queue->bottom += 1;

		if(queue->size == 0){
			queue->top = NULL;//refresh the top
			queue->bottom = NULL;//refresh the bottom
			queue->peek = NULL;//refresh the peek
			queue->isEmpty = true;//refresh the isEmpty
		}
		
		return dequeuedElement;

	}else{
		cout << "The queue has no elements." << endl;
	}

	return -1;
}