#include<stdio.h>
int main(){
	int p,r,n,area;
	printf("Enter Price:");
		scanf("%d",&p);
	printf("Enter Rate:");
		scanf("%d",&r);
	printf("Enter Percent:");
		scanf("%d",&n);
	area=p*r*n/100;
	printf("Simple Interest:%d",area);	
}
