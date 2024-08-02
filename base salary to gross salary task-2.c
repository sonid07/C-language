#include<stdio.h>
int main(){
	int BS,HRA,DA,TA,GS;
	
//	Input Base Salary
	printf("Enter Base Salary:");
	scanf("%d",&BS);
	
//	input of Alloweances
	printf("Enter HRA:");
	scanf("%d",&HRA);
	printf("Enter DA:");
	scanf("%d",&DA);
	printf("Enter TA:");
	scanf("%d",&TA);
	GS=BS+HRA+DA+TA;
	
//	Output of Gross Salary
	printf("Gross Salary=%d",GS);
}
