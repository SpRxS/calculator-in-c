#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	SetConsoleTitle("Calculator-v0.7");
	system("color 04");
	
	int option;
	double num1, num2;
	
	do
	{
		printf(" ============================================================");
	    printf("\n ||                                                        ||");
	    printf("\n ||                      CALCULATOR                        ||");
	    printf("\n ||                   ver. 0.7  by pRx                     ||");
	    printf("\n ||                                                        ||");
	    printf("\n ============================================================");
	    printf("\n\n");
	    
	    printf(" ********** MAIN MENU **********");
        printf("\n\n [1] +");
        printf("\n [2] -");
        printf("\n [3] *");
        printf("\n [4] /");
        printf("\n [5] Exit");
		
		printf("\n\n Enter your choice: ");
        scanf("%d", &option);
        system("cls");
		
		switch(option)
		{
			case 1:
		    	printf("Enter your number (1 2): ");
				scanf("%lf %lf", &num1, &num2);
				
				printf("\n%.1lf + %.1lf = %.1lf\n\n", num1, num2, num1 + num2);
				
				printf("--------------------------------------------------\n\n");
				break;
			
			case 2:
				printf("Enter your number (1 2): ");
				scanf("%lf %lf", &num1, &num2);
				
				printf("\n%.1lf - %.1lf = %.1lf\n\n", num1, num2, num1 - num2);
				
				printf("--------------------------------------------------\n\n");
				break;
			
			case 3:
				printf("Enter your number (1 2): ");
				scanf("%lf %lf", &num1, &num2);
				
				printf("\n%.1lf * %.1lf = %.1lf\n\n", num1, num2, num1 * num2);
				
				printf("--------------------------------------------------\n\n");
				break;
				
			case 4:
				printf("Enter your number (1 2): ");
				scanf("%lf %lf", &num1, &num2);
				
				printf("\n%.1lf / %.1lf = %.1lf\n\n", num1, num2, num1 / num2);
				
				printf("--------------------------------------------------\n\n");
				break;
				
			case 5:
                break;
								
			default:
                printf(" ERROR: Invalid choice!\n");
		}
		
	} while(option != 5);
	
	return 0;
}
