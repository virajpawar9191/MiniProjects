#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int guess, number, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Guess the smaller number please\n");
        }
        else if (guess < number)
        {
            printf("Guess the greater number please\n");
        }
        else
        {
            printf("You guess3ed it in %d guesses\n", nguesses);
        }
        nguesses++;

    } while (guess != number);

    return 0;
}
