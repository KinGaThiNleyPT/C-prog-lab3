#include <stdio.h>
int main()
{
	int depo;
	printf("Enter initial deposite to your acc:");
	scanf("%d",&depo);

	if(depo > 1000){
		int op;
		int credit;
		int deb;
		printf("1--For credit\n"); 	
		printf("2--For debit\n");
		printf("3--For balance enquiry\n");
		printf("enter your option:\n");
		scanf("%d",&op);

		switch(op){
			case 1:
				printf("enter your credit amount:");
				scanf("%d",&credit);
				int tamount = credit + depo;
				printf("Total amount of your account is:%d ",tamount);  
				break;
			case 2:
				printf("Enter your debit amount:");
				scanf("%d", &deb);
				if(deb < depo)
				{
					int tamount= depo - deb;
					printf("Total amount of your amount is:%d",tamount );
				}
				else
					printf("Insufficient fund to debit\n");
				break;
			case 3:
				printf("Your balance is:%d",depo);
				break;	
			default:
				printf("Invalid option choose");
				break;	
		}
	}	
	else
	{
		printf("Your amount is less than 1000:\n");
	}				  
}	