#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	SetConsoleTitle("Calculator-v0.1"); // Console header set with windows.h library
	
	double num1, num2;
	char opt;
	
	while(1)
	{
		printf("--------------------|Calculator made by pRx|--------------------\n\n");
		printf("-|1 [+]\n");
		printf("-|2 [-]\n");
		printf("-|3 [*]\n");
		printf("-|4 [/]\n\n");
		printf("-|quit [q]\n\n");
		printf("--|Enter an operator or number (+, 1): ");
		scanf(" %c", &opt);
		
		if (opt == 'q')
			exit(0);
		
		printf("\nEnter the two numbers (1 2): ");
		scanf("%lf %lf", &num1, &num2);
		
		switch(opt)
		{
			case '1':case '+':
				printf("\n%.1lf + %.1lf = %.1lf\n\n", num1, num2, num1 + num2);
				break;
			
			case '2':case '-':
				printf("\n%.1lf - %.1lf = %.1lf\n\n", num1, num2, num1 - num2);
				break;
			
			case '3':case '*':
				printf("\n%.1lf * %.1lf = %.1lf\n\n", num1, num2, num1 * num2);
				break;
				
			case '4':case '/':
				printf("\n%.1lf / %.1lf = %.1lf\n\n", num1, num2, num1 / num2);
				break;
				
			default:
		        printf("\nError! please write a valid operator\n\n");
		}
	}
}
