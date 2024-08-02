#include<stdio.h>
int main(){
	int i=1,num,sum=0;
	printf("Enter any number:");
		scanf("%d",&num);
	for(i=1;i<=num;i++){
	sum+=i;
//		sum=sum+i;
	}
	printf("The sum of all numbers:%d",sum);
}
