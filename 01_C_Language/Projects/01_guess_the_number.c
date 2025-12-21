#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));
    int randomNumber = (rand() % 100) +1;
    int user_num, count = 1;
    printf("Enter a number: ");
    scanf("%d", &user_num);

    while (user_num != randomNumber)
    {
        if (randomNumber > user_num)
        {
            printf("Enter a greater number: ");
            scanf("%d", &user_num);
        }
        else if (randomNumber < user_num)
        {
            printf("Enter a smaller number: ");
            scanf("%d", &user_num);
        }
        
        else if (user_num < 0 || user_num > 100)
        {
            printf("Please enter number between 0 and 100: ");
            scanf("%d", &user_num);
        }

        count++;
    }

    if (user_num == randomNumber)
    {
        printf("\nCorrect! The number was %d.\nYou guessed it in %d tries.\n", randomNumber, count);
    }

    return 0;
}