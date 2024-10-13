#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    // Initialize rnadom number generator
    srand(time(0));

    // Generate random nuber between 1 to 100
    int random_number = (rand() % 100) + 1;
    int guessed;
    int no_of_guess = 0;
    // print the random number
    // printf("random number: %d\n", rnadom_number);
    do
    {
        printf("Guess the no: ");
        scanf("%D", &guessed);
        no_of_guess += 1;
        if (guessed > random_number)
        {
            printf("Lower number please!\n");
        }
        else if (guessed < random_number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("congrates!\n");
        }
    } while (guessed != random_number);
    printf("You guessed the number in %d guesse.", no_of_guess);
    return 0;
}