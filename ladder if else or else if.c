#include<stdio.h>
int main(){
	int a,num;
	printf("Enter number:");
	scanf("%d",& num); 
	
	if(num>0){
		printf("The number is positive",num);
	}
	else if(num<0){
		printf("The number is negative",num);
	}
	else{
		printf("The number is neutral",num);
	}
}
