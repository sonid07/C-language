#include<stdio.h>
int main(){
	int lang,eng,hin,guj;
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n");
	printf("Enter your Choice:");
	scanf("%d",&lang);
	switch (lang){
		case 1:
			printf("Press 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\n");
			printf("Enter your choice:");
			scanf("%d",&eng);
			switch (eng){
				
				case 1:
				printf("You have successfully done a Internet Recharge.");
				break;
				case 2:
				printf("You have successfully done a Top-up Recharge.");
				break;
		        case 3:
				printf("You have successfully done a Special Recharge.");
				break;
				default:
				printf("invalid choice");
				break; 
			}
			break;
		case 2:
			printf("Internet Recharge ke liye 1 dabaiye\nTop-up Recharge ke liye 2 dabaiye\nSpecial Recharge ke liye 3 dabaiye\n");
			printf("Enter your choice:");
			scanf("%d",&hin);
			switch (hin){
				case 1:
				printf("Aapne safaltapurvak Internet Recharge kar liya he.");
				break;
				case 2:
				printf("Aapne safaltapurvak Top-up Recharge kar liya he.");
				break;
		        case 3:
				printf(" Aapne safaltapurvak Special Recharge kar liya he.");
				break;
				default:
				printf("invalid choice");
				break; 
			}
			break;
		case 3:
			printf("Internet Recharge mate 1 dabavo\nTop-up Recharge mate 2 dabavo\nSpecial Recharge mate 3 dabavo\n");
			printf("Enter your choice:");
			scanf("%d",&guj);
			switch (guj){
				case 1:
				printf("Tame safaltapurvak Special Recharge karyu chhe.");
				break;
				case 2:
				printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
				break;
		        case 3:
				printf("Tame safaltapurvak Special Recharge karyu chhe.");
				break;
				default:
				printf("Invalid Choice");
				break; 
			}
			break;
			default:
				printf("invalid choice");
				break; 
	}
}
