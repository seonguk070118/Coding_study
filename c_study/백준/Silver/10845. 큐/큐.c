#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#define MAX_Q_SIZE 50000
typedef struct {
	int front;
	int rear;
	int data[MAX_Q_SIZE];
}Queue;
void initQueue(Queue* q){
	q->front=-1;
	q->rear=-1;
}
int isEmpty(Queue* q){
  if(q->front==q->rear)
	{
		return 1;
	}
	else{
		return 0;
	}
}
void push(Queue* q,int item){
	q->rear=q->rear+1;
	q->data[q->rear]=item;
}

int pop(Queue* q){
	if(isEmpty(q)) return -1;
	else{
		return q->data[++q->front];
	}
}

void empty(Queue* q){
	if(isEmpty(q)) printf("1\n");
	else printf("0\n");
}

void size(Queue* q){
	printf("%d\n",q->rear - q->front);
}

void front(Queue* q){
	if(isEmpty(q)) printf("-1\n");
	else{
		int a=q->front+1;
		printf("%d\n",q->data[a]);
	}
}

void back(Queue* q){
	if(isEmpty(q)) printf("-1\n");
	else{
		printf("%d\n",q->data[q->rear]);
	}
}

int main(){
	Queue q;
	initQueue(&q);
	int i,n,b;
	char a[7];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		if(a[0]=='p'){
			if(a[1]=='o'){
				printf("%d\n",pop(&q));
			}
			else{
				scanf("%d",&b);
				push(&q,b);
			}
		}
		else if(a[0]=='s'){
			size(&q);
		}
		else if(a[0]=='e'){
			empty(&q);
		}
		else if(a[0]=='f'){
			front(&q);
		}
		else if(a[0]=='b'){
			back(&q);
		}
	}
	return 0;
}