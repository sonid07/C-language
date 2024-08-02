#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter Value of First num:");
	scanf("%d",&a); 
	printf("Enter Value of Secoud num:");
	scanf("%d",&b);
	printf("Enter Value of Third num:");
	scanf("%d",&c);
	printf("Enter Value of Fourth num:");
	scanf("%d",&d);
	
	if(a>d){
		if(b>c){
			printf("A");
		}
		else{
			printf("B");	
		}
	}
	else {
		printf("D");
	}
}
