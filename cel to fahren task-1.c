#include<stdio.h>
int main(){
	float C,F,formulae;
	
//	input Temperature in Celcius
	printf("The Temperature in Celcius:");
	scanf("%f",&C);
	formulae=F=((C*9)/5)+32;
	printf("The Temperature in Fahrenheit=%.2f",F);
}
