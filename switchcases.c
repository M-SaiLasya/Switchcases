#include<stdio.h> 
void main() {
	int choice;
	printf("Enter Your choice:\n1.Burger\n2.Falooda\n3.Veg-Noodles\n");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			printf("Burger\n");
			break;
		case 2:
			printf("Falooda\n");
			break;
		case 3:
			printf("Veg-Noodles\n");
			break;
		default:
			printf("Your choice is not in the list\n");
			break;
	}
}
