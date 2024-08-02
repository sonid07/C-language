#include<stdio.h>
int main(){
	int one,two;
	printf("Enter first year:");
	scanf("%d",&one);
	printf("Enter secound year:");
	scanf("%d",&two);
	while(one<=two){
		if((one%4==0 && one%100!=0)||(one%400==0)){
			printf("%d\n",one);
		}
		one++;
	}
}
