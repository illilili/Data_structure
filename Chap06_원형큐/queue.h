#pragma once

#define MAX_QUEUE_SIZE 5
//����
typedef int element;

typedef struct {
	int front;
	int rear;
	element data[MAX_QUEUE_SIZE];
}QueueType;

void init_queue(QueueType* q);
void enqueue(QueueType* q, element item);
element dequeue(QueueType* q);
void queue_print(QueueType* q);
int is_empty(QueueType* q);
int is_full(QueueType* q);
