#include <stdio.h>

char square[10] = {
    'o',
    '1',
    '2',
    '3',
    '4',
    '5',
    '6',
    '7',
    '8',
    '9',
};

int main()
{
    int player, i, choice;

    player = 1;

    char mark;

    do
    {
        board();

        player = (player % 2) ? 1 : 2;

        printf("\n  Player %d, enter a number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else
        {
            printf("\n\tInvalid move!");
            sleep(2);
            player--;
            getchar();
        }

        i = checkwin();

        player++;

    } while (i == -1);

    board();

    if (i == 1)
        printf("\n\tPlayer %d won", --player);
    else
        printf("\tGame draw");

    getchar();

    return 0;
};

/**************************************************************************
 * 
 *         FUNCTION  TO  RETURN  GAME  STATUS  RESULTS
 *  
 *          1       FOR GAME OVER  WITH RESULTS
 *         -1       FOR GAME IN PROGRESS
 *          0       GAME IS OVER AND NO RESULTS
 * 
**************************************************************************/

int checkwin()
{

    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (
        square[1] != '1' &&
        square[2] != '2' &&
        square[3] != '3' &&
        square[4] != '4' &&
        square[5] != '5' &&
        square[6] != '6' &&
        square[7] != '7' &&
        square[8] != '8' &&
        square[9] != '9')
        return 0;

    else
        return -1;
};

/**************************************************************************
 * 
 *        FUNCTION TO DRAW BOARD OF TIC-TAC-TOE WITH PLAYER MARKS
 * 
**************************************************************************/
void board()
{
    system("cls");
    printf("\n\n           Tic Tac Toe\n\n");
    printf("  Player 1 (X)  -  Player 2 (O)\n\n");

    printf("\t     :     :     \n");
    printf("\t  %c  :  %c  :  %c  \n", square[1], square[2], square[3]);

    printf("\t_____:_____:_____\n");
    printf("\t     :     :     \n");

    printf("\t  %c  :  %c  :  %c  \n", square[4], square[5], square[6]);

    printf("\t_____:_____:_____\n");
    printf("\t     :     :     \n");

    printf("\t  %c  :  %c  :  %c  \n", square[7], square[8], square[9]);
    printf("\t     :     :     \n");
};

/**************************************************************************
 * 
 *        EMD
 * 
**************************************************************************/