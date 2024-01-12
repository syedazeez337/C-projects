#include <stdio.h>
#include <stdbool.h>

int main(void)
{
				double bill, percent;
				int numofpeople;

				bool quit = false;
				while(!quit)
				{
                char choice;
                printf("Enter your choice calculate tip(t) or quit(q): ");
                scanf(" %c", &choice);
                //printf("%c %X\n", choice, choice);
                /*
                This bug in this programme: the getchar() takes the return(enter)
                from the keyboard as the input to the next while loop
                */
								if(choice == 'q')
								{
												quit = true;
												printf("Thank you! Bye...\n");
												break;
								}
								else
								{
												printf("Enter the bill: ");
												scanf("%lf", &bill);
												printf("Enter tip percent: ");
												scanf("%lf", &percent);
												printf("Enter number of people: ");
												scanf("%d", &numofpeople);

												double tipamt = bill * (percent / 100);
												double total = bill + tipamt;
												double eachperson = total / numofpeople;

												printf("Tip amount: %.2lf\n", tipamt);
												printf("Total bill: %.2lf\n", total);
												printf("Shared cost: %.2lf\n", eachperson);
								}
				}
}
