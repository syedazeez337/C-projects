#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GUESSNUM 20
#define ATTEMPTS 5

void showMenu();
void rulesGame();
void winMsg();
void loseMsg();

int main(void)
{
    char choice;
    int plays, wins, loses;
    int score = 10;
    showMenu();
    printf("Enter: ");
    scanf(" %c", &choice);
    
    while(choice != 'q')
    {
        srand(time(NULL));
        int randNum = (rand() % GUESSNUM) + 1;

        int guessNum;
        rulesGame();
        printf("Enter a number 1 to %d: ", GUESSNUM);
        scanf("%d", &guessNum);

        for(int i = 1; i < ATTEMPTS; ++i)
        {
            if(guessNum > GUESSNUM || guessNum < 1)
            {
                printf("Invalid Input...\n");
                break;
            }
            else if(guessNum == randNum)
            {
                puts("Correct...");
                score += 10;
                winMsg();
                wins++;
                break;
            }
            else if(guessNum < randNum)
            {
                printf("Attempt --> %d", i);
                printf("\t\tLow...  Guess Higher...\n");
                score--;
            }
            else if(guessNum > randNum)
            {
                printf("Attempt --> %d", i);
                printf("\t\tHigh... Guess Lower...\n");
                score--;
            }
            else
            {
                printf("Debug...\n");
                break;
            }
            printf("Guess again: ");
            scanf("%d", &guessNum);
        }
        if(score < 10)
        {
            loseMsg();
            loses++;
        }
        showMenu();
        printf("Enter: ");
        scanf(" %c", &choice);
        plays++;
    }
    printf("Game Statistics\n");
    printf("Score         -> %d\n", score);
    printf("Plays         -> %d\n", plays);
    printf("Wins          -> %d\n", wins);
    printf("Loses         -> %d\n", loses);
}


// show the menu
void showMenu()
{
    printf("\n\t************************\n");
    printf("\t* Play a Guessing Game *\n");
    printf("\t* (s) Start  (q) quit  *\n");
    printf("\t************************\n");
    printf("\n");
}

// show the rules of the game
void rulesGame()
{
    printf("\n\t**************************************************\n");
    printf("\t**    1. Guess a number between 1 and 20        **\n");
    printf("\t**    2. Guess the number correctly to win      **\n");
    printf("\t**    3. When you run out of attepts you lose   **\n");
    printf("\t**    4. For every wrong guess -1 is deducted   **\n");
    printf("\t**    3. For right guess +10 is added to score  **\n");
    printf("\t**************************************************\n");
}

// win message
void winMsg()
{
    printf("\n\t********************************\n");
    printf("\t**     You Won!!! Yay!!!      **\n");
    printf("\t********************************\n");
}

// lose message
void loseMsg()
{
    printf("\n\t********************************\n");
    printf("\t**     You Lost!!!            **\n");
    printf("\t********************************\n");
}
