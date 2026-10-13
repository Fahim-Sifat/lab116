#include<stdio.h>


int sum(int a,int b){
	int result=a+b;
	return result;
}

int main(){
	int x=15,y=20;

	printf("The summation of a & b is:%d\n",sum(x,y));
	return 0;
}

