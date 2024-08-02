#include<stdio.h>

 int main(){
 	
 	int num,i=1,cube;
 	
 	printf("Enter The Number:");
 	scanf("%d",&num);
 	
 	for(i=1;i<=num;i++){
 		cube=i*i*i;
      printf("cube of:%d is %d\n",i,cube);
	 }
    
 }
