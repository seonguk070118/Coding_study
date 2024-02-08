#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#define MAX_DEQUE_SIZE 500000

typedef int element;
typedef struct {
	element data[MAX_DEQUE_SIZE];
	int front, rear;
} DequeType;

int size=0;
// 초기화
void initDeque(DequeType* q) {
	q->front=0;
	q->rear=0;
}

// 공백 상태 검출 함수
int isEmpty(DequeType* q) {
	if(q->front==q->rear) return 1;
	else return 0;
}

// front 삽입 함수
void addFront(DequeType* q, element item) {
	q->data[q->front] = item;
    q->front = (q->front - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
	size++;
}

// rear 삽입 함수
void addRear(DequeType* q, element item) {
	q->rear = (q->rear + 1) % MAX_DEQUE_SIZE;
    q->data[q->rear] = item;
    size++;
}

// front 삭제 함수
element deleteFront(DequeType* q) {
	if (isEmpty(q)) {
        return -1;
    }
	else{
		q->front = (q->front + 1) % MAX_DEQUE_SIZE;
		size--;
		return q->data[q->front];
	}
}
// rear 삭제 함수
element deleteRear(DequeType* q) {
	if (isEmpty(q)) {
        return -1;
    }
    size--;
	element de = q->data[q->rear];
    q->rear = (q->rear - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
    return de;
}

// front get 함수
element getFront(DequeType* q) {
	if (isEmpty(q)) {
        return -1;
  	}
  	return q->data[(q->front + 1) % MAX_DEQUE_SIZE];
}

// rear get 함수
element getRear(DequeType* q) {
	if (isEmpty(q)) {
        return -1;
  	}
  	else{
		return q->data[q->rear];
	}
}

void ssize(){
	printf("%d\n",size);
}
int empty(DequeType* q) {
	if(q->front==q->rear) return 1;
	else return 0;
}

int main() {
	DequeType deque;
	char command[15];
	element idata;
	
	initDeque(&deque);
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%s",command);
		if(strcmp(command, "push_front") == 0){
			scanf("%d",&idata);
			addFront(&deque,idata);
			continue;
		}
		if(strcmp(command, "push_back") == 0){
			scanf("%d",&idata);
			addRear(&deque,idata);
			continue;
		}
		if(strcmp(command, "pop_front") == 0){
			printf("%d\n",deleteFront(&deque));
			continue;
		}
		if(strcmp(command, "pop_back") == 0){
			printf("%d\n",deleteRear(&deque));
			continue;
		}
		if(strcmp(command, "front") == 0){
			printf("%d\n",getFront(&deque));
			continue;
		}
		if(strcmp(command, "back") == 0){
			printf("%d\n",getRear(&deque));
			continue;
		}
		if(strcmp(command, "size") == 0){
			ssize();
			continue;
		}
		if(strcmp(command, "empty") == 0){
			printf("%d\n",empty(&deque));
			continue;
		}
	}
	
	return 0;
}