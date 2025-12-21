#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int player, computer;
    char *names[] = {"Snake", "Water", "Gum"};
    /*
        0 --> Snake
        1 --> Water
        2 --> Gun
    */
    computer = rand() % 3;
    printf("Enter 0 for Snake 1 for Water 2 for Gun: ");
    scanf("%d", &player);
    printf("Computer choose %s\nYou choose %s\n", names[computer], names[player]);
    if (player > 0 || player < 2)
    {

        if (computer == player)
        {

            printf("Draw!\n");
        }
        else
        {
            if ((computer == 0 && player == 2) || (computer == 1 && player == 0) || (computer == 2 && player == 1))
            {
                printf("You Win!\n");
            }
            else
            {
                printf("You Lose!\n");
            }
        }
    }
    else{
        printf("Enter a valid number!");
    }
    return 0;
}