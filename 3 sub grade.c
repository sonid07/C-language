#include<stdio.h>
int main(){
	float s1,s2,s3,formula;
	printf("Enter Marks of Account:");
	scanf("%f",&s1);
	printf("Enter Marks of Statistics:");
	scanf("%f",&s2);
	printf("Enter Marks of Economics:");
	scanf("%f",&s3);
	formula=(s1+s2+s3)/3;
	printf("Average Marks=%.2f",formula);	
}
