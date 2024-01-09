#include <stdio.h>
#include <stdbool.h>

int x, y;

void add()
{
	printf("Enter num1 num2: ");
	scanf("%d %d", &x, &y);
	double result = (double) x + (double) y;
	printf("Sum of %d + %d = %.3lf\n", x, y, result);
}

void sub()
{
	printf("Enter num1 num2: ");
	scanf("%d %d", &x, &y);
	double result = (double) x - (double) y;
	printf("Sub of %d - %d = %.3lf\n", x, y, result);
}

void mul()
{
	printf("Enter num1 num2: ");
	scanf("%d %d", &x, &y);
	double result = (double) x * (double) y;
	printf("Product of %d * %d = %.3lf\n", x, y, result);
}

void div()
{
	printf("Enter num1 num2: ");
	scanf("%d %d", &x, &y);
	double result = (double) x / (double) y;
	printf("Div of %d / %d = %.3lf\n", x, y, result);
}

int main(void)
{
	char choice;
	printf("Enter your choice +, -, *, / or `q` for quit: ");
	scanf("%s", &choice);

	while(choice != 'q')
	{
	switch (choice)
	{
	case '+':
		add();
		break;
	case '-':
	    sub();
		break;
	case '*':
	    mul();
		break;
	case '/':
	    div();
		break;
	default:
	    printf("Wrong input\n");
		break;
	}
	printf("Enter your choice +, -, *, /: ");
	scanf("%s", &choice);
	}
}
