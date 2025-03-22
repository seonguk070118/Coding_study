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
	printf("초기 합계: %d\n",sum);
	
	pthread_t producer, consumer;
	
	pthread_create(&producer, NULL,produce, NULL);
	pthread_create(&consumer, NULL,consume, NULL);
	
	pthread_join(producer,NULL);
	pthread_join(consumer,NULL);
	
	printf("생성자, 소비자 스레드 실행 이후 합계: %d\n",sum);
	
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

