#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter Value of First num:");
	scanf("%d",&a); 
	printf("Enter Value of Secoud num:");
	scanf("%d",&b);
	printf("Enter Value of Third num:");
	scanf("%d",&c);
	if (a<c){
		if(a<b){
			printf("minimum value=%d",a);
		}
		
		else{
			printf("minimum value=%d",b);
		}
	}
	else{
		printf("The minimum value=%d",c);
	}
}
