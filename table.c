#include<stdio.h>
int main(){
	int i,num,tab=1;
	printf("Enter any number:");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		printf("%d X %d =%d\n",num,i,num*i);
	}
}
