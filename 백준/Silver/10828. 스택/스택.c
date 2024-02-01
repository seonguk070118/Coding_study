#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 100000
typedef int element;
typedef struct{
    int  top;
    element  data[MAX_STACK_SIZE];
} Stack;

Stack s;
void empty(){
	if(s.top==-1)
		printf("1\n");
	else
		printf("0\n");
}
int isEmpty(){
	if(s.top==-1)
		return 1;
	else
		return 0;
}
void push(element item){
	s.data[++s.top]=item;
}
void pop(){ 
	if(isEmpty()){
		printf("-1\n");
		return 0;
	}
	printf("%d\n",s.data[s.top--]);
}
element top(){
	if(isEmpty()){
		printf("-1\n");
		return 0;
	}
	printf("%d\n",s.data[s.top]);
}
void size(){
	printf("%d\n",s.top+1);
}
int main(){
	s.top=-1;
	int i,n,b;
	char a[7];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		if(a[0]=='p'){
			if(a[1]=='o'){
				pop();
			}
			else{
				scanf("%d",&b);
				push(b);
			}
		}
		else if(a[0]=='s'){
			size();
		}
		else if(a[0]=='e'){
			empty();
		}
		else if(a[0]=='t'){
			top();
		}
	}
	return 0;
}