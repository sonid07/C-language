#include<stdio.h>
int main(){
	int fa,sa,formulae;
	printf("Enter degree of First Angle:");
	scanf("%d",&fa);
	printf("Enter degree of Second Angle:");
	scanf("%d",&sa);
	formulae=180-(fa+sa);
	printf("Third Angle=%d",formulae);
}
