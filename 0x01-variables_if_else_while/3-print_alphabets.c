<<<<<<< HEAD
#include <stdio.h>



/**

 * main - Prints the alphabet.

 *

 * Return: Always 0 (Success)

 */

int main(void)

{

	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;



	for (i = 0; i < 52; i++)

	{

		putchar(alp[i]);

	}

	putchar('\n');

	return (0);

}
=======
#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
>>>>>>> 3b11e22d51675b6fab6045e14ffcbf6704bc42af
