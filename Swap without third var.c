#include<stdio.h>
int main(){
	int a=10,b=20,c;
	printf("Before Swap a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swap a=%d b=%d\n",a,b);
}
