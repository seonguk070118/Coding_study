#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<limits.h>
#include <stdbool.h>
// �������� ����ü �����ϱ�
#include<stdio.h>
#include<stdlib.h>
typedef int element;
//1)Node ����ü�� ������ ����
typedef struct Node{
	element data;
	struct Node *next;
}Node;
int main(){
	 Node *n1, *n2 ,*n3, *head;
    n1 = (Node *)malloc(sizeof(Node));//Node����ü n1 �����Ҵ�
    n2 = (Node *)malloc(sizeof(Node));//Node����ü n2 �����Ҵ�
		n3 = (Node *)malloc(sizeof(Node));//Node����ü n3 �����Ҵ�
    n1->data=10;//2) n1�� �����Ϳ� 10�� ����
    n1->next=n2;//3) n1�� ���� ��� �ּ� next�� n2�� ����
 		n2->data=20;//4) n2�� �����Ϳ� 20�� ����
		n2->next=n3;//5)n2�� ���� ��� �ּ� next�� n3 ����
  	n3->data=30;//6) n3�� �����Ϳ� 30�� ����
		n3->next=NULL;//7) n3�� ���� ��� �ּ� next�� NULL ����
    head = n1;//8)n1�� �ּ� ����(����)
    while( head ){
        printf("%d->", head->data);
       head=head->next;//9) head�� ���� ��� �ּ� ����
			  
    }
}

