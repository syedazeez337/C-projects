#include <stdio.h>

int main(void)
{
				double amount, percent;
				int numOfpeople;

				printf("Enter the Bill:");
				scanf("%lf", &amount);
				printf("Enter the tip in percent:");
				scanf("%lf", &percent);
				printf("Enter number of people:");
				scanf("%d", &numOfpeople);
				//printf("input--> %lf %lf %d\n", amount, percent, numOfpeople);
				// printf for debug

				double tipamt = amount * (percent / 100);
				double totalamount = amount + tipamt;
				double eachperson = totalamount / numOfpeople;

				printf("Tip amount = %.2f\n", tipamt);
				printf("Total amount = %.2f\n", totalamount);
				printf("Each person contribution = %.2f\n", eachperson);
}
