//C Program to Display the ATM Transaction//

#include <stdio.h>
#include<stdlib.h>
unsigned long amount=100000, accountno,transfer,deposit, withdraw;
int choice, pin, k;
char transaction ='y';
 
int main()

{
	while (pin != 3939)
	{
		printf("ENTER YOUR  PIN NUMBER:");
		scanf("%d", &pin);
		if (pin != 3939)
		printf("PLEASE ENTER VALID PASSWORD\n");
	}
	do
	{
		printf("**********Welcome to STATE BANK OF INDIA**************\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Transfer Amount\n");
		printf("5. Quit\n");
		printf("***********************************************\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			
			printf("\nYOUR BALANCE IN Rs : %lu ", amount);
			break;
			
		case 2:
			
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (withdraw >(amount - 5000))
			{
				printf("\n INSUFFICENT BALANCE");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n\n PLEASE COLLECT CASH");
				printf("\n YOUR CURRENT BALANCE IS %lu", amount);
			}
			break;
			
		case 3:
			
			printf("\n ENTER THE AMOUNT TO DEPOSIT");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("YOUR BALANCE IS %lu", amount);
			break;
			
		case 4:
			
			printf("\n ENTER ACCOUNT NO. OF RECEIVER");
			scanf("%lu",&accountno);
			printf("\n ENTER AMOUNT TO TRANSFER");
			scanf("%lu",&transfer);
			        	amount= amount - transfer;
			printf("YOUR BALANCE IS %lu",amount);
			break;
			
		case 5:
			
			printf("\n THANK U for USING ATM");
			break;
			
		default:
			
			printf("\n INVALID CHOICE");
		}
		
		printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
	}
	 while (!k);
	 
	printf("\n\n THANKS FOR USING OUT ATM SERVICE");
	return 0;
}
