#define _CRT_SECURE_NO_SECURE
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 5
typedef struct Queue {
	void** queue;
	int front;
	int rear;
}Queue;
void initiateQueue(Queue** myQueue) {
	(*myQueue) = malloc(sizeof(Queue));
	(*myQueue)->queue = malloc(sizeof(void*) * MAX_SIZE);
	(*myQueue)->front = 0;
	(*myQueue)->rear = 0;
}
void push(Queue* myQueue, void* data) {
	if (NULL == myQueue) {
		return NULL;
	}
	if (data == NULL) {
		return;
	}
	if(myQueue->front == (myQueue->rear + 1) % MAX_SIZE) {
		return;
	}
	myQueue->queue[myQueue->rear] = data;
	myQueue->rear = (myQueue->rear + 1) % MAX_SIZE;
}
void pop(Queue* myQueue) {
	if (myQueue->front == myQueue->rear) {
		return;
	}
	myQueue->front = (myQueue->front + 1) % 5;
}
void* top(Queue* myQueue) {
	if (myQueue->front == myQueue->rear) {
		return;
	}
	return myQueue->queue[myQueue->front];
}

int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	Queue* myqueue = NULL;
	initiateQueue(&myqueue);
	push(myqueue, &a);
	push(myqueue, &b);
	push(myqueue, &c);
	push(myqueue, &d);
	int i = 0;
	while (i++<4)
	{
		printf("%d\n", *(int*)top(myqueue));
		pop(myqueue);
	}
	system("pause");
	return 0;
}