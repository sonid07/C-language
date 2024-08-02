#include<stdio.h>
int main(){
	int num1,num2,num3,min,tem;
	printf("Enter value of first number:");
	scanf("%d",&num1);
	printf("Enter value of second number:");
	scanf("%d",&num2);
	printf("Enter value of third number:");
	scanf("%d",&num3);
	tem=(num1<num2)?num1:num2;
	min=(num3<tem)?num3:tem;
	printf("min num=%d",min);
	
}
