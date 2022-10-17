#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Entry point
 *
=======
 * main - assign a different value to int everytime it runs
 * it executes and print it
>>>>>>> bcb9afd910757e9b7160751b330ecc6d7156b89f
 * Return : 0 (success)
 */
int main(void)
{
	int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	if (n > 0)
<<<<<<< HEAD
	    printf ("%d is positive\n", n);
	else if (n == 0)
	       printf("%d is zero\n", n);
	else if (n < 0)
	         printf("%d is negative\n", n);
=======
	    printf("%d is positive\n", n);
	else if (n == 0)
	         printf("%d is zero\n", n);
	else if (n < 0)
	        printf("%d is negative\n", n);
>>>>>>> bcb9afd910757e9b7160751b330ecc6d7156b89f
	return (0);
}
