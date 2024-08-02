#include<stdio.h>
int main(){
	int i,num,fact=1;
	printf("Enter any number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact*=i;
	}
	printf("The sum of all numbers:%d",fact);
}
