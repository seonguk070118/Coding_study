#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

#include<stdio.h>
#include<othread.h>

void *produce(void *arg);
void *consume(void *arg);

int sum = 10;

int main(){
	printf("�ʱ� �հ�: %d\n",sum);
	
	pthread_t producer, consumer;
	
	pthread_create(&producer, NULL,produce, NULL);
	pthread_create(&consumer, NULL,consume, NULL);
	
	pthread_join(producer,NULL);
	pthread_join(consumer,NULL);
	
	printf("������, �Һ��� ������ ���� ���� �հ�: %d\n",sum);
	
	return 0;
}

void *produce(void *arg){
	for(int i = ; i<1000000;i++){
		sum--;
	}
	pthread_exit(NULL);
}
void *consume(void *arg){
	for(int i = ; i<1000000;i++){
		sum--;
	}
	pthread_exit(NULL);
}

