#include<stdio.h>
int main(){
	int a,b;
	printf("Enter Value of First num:");
	scanf("%d",&a); 
	printf("Enter Value of Secoud num:");
	scanf("%d",&b);
	if (a<b){
		printf("The minimum value=%d",a);
	}
	else{
		printf("The minimum value=%d",b);
	}
}
