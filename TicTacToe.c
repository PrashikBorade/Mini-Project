#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true 1
#define false 0

int main()
{
    playGame();
    return 0;
}
int playGame()
{

    char scanned[3];
    printf("Do you wish to play tick-tack-toe?\n");
    scanf("%s", scanned);
    if(strcasecmp(scanned,"yes")==0)
        startGame();

    else
    {
        if (strcmp(scanned,"no")==0 || strcmp(scanned,"nah")==0 || strcmp(scanned,"naw")==0)
        {
            printf("That's too bad!/nThis program will now end.");
            return 1;
        }
        printf("Not valid input!/nThis program will now end.");
        return 1;
    }
}
int startGame()
{
    //Sets up board for values 1-9;
    char board[3][3] =
    {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    bool winner = false;
    printf("\n\nHere is your playing board. Player One is Os and Player Two is Xs\n");
    printf("Entering a number 1-9 (then pushing enter) as shown below will use\nthe current Player's turn in that location.\n");


    printf("\n\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("-----------\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("-----------\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

    int x=0;
    int j=0;
    int turn[9];
    while (j<sizeof(turn)/sizeof(turn[0]) && winner == false)
    {
        scanf("%d",&turn[j]);
        //turn[j] = x;
        if (j%2==0)
        {
            if (turn[j]==1)
            {
                board[0][0] = 'O';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==2)
            {
                board[0][1] = 'O';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==3)
            {
                board[0][2] = 'O';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==4)
            {
                board[1][0] = 'O';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==5)
            {
                board[1][1] = 'O';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==6)
            {
                board[1][2] = 'O';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==7)
            {
                board[2][0] = 'O';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==8)
            {
                board[2][1] = 'O';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
        }
        if (turn[j]==9)
        {
            board[2][2] = 'O';
            printf("\n\n");
            printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
            printf("-----------\n");
            printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
            printf("-----------\n");
            printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
        }
        if (j%2!=0)
        {
            if (turn[j]==1)
            {
                board[0][0] = 'X';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==2)
            {
                board[0][1] = 'X';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==3)
            {
                board[0][2] = 'X';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==4)
            {
                board[1][0] = 'X';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==5)
            {
                board[1][1] = 'X';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==6)
            {
                board[1][2] = 'X';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==7)
            {
                board[2][0] = 'X';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==8)
            {
                board[2][1] = 'X';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }
            if (turn[j]==9)
            {
                board[2][2] = 'X';
                printf("\n\n");
                printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
                printf("-----------\n");
                printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            }




        }


        j++;
    }
}