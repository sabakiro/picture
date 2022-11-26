//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//typedef struct Queue {
//	int capacity;
//	void** queue;
//	int front;
//	int back;
//}Queue;
//void initiateQueue(Queue**queue) {
//	(*queue)->capacity = 5;
//	*queue = malloc(sizeof(Queue)* (*queue)->capacity);
//	(*queue)->front = 0;
//	(*queue)->back = 0;
//}
//void push(Queue* queue,int data) {
//	if (queue->front == ((queue->back+1) % 5)) {
//		return;
//	}
//	queue->queue[queue->back] = data;
//	queue->back = (queue->back+1) % 5;
//}
//void pop(Queue* queue) {
//	if (queue->front == queue->back) {
//		return;
//	}
//	queue->front=(queue->front + 1) % 5;
//}
//int main() {
//
//
//	system("pause");
//	return 0;
//}