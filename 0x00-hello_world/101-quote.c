#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description:A program explains unix
 *
 * Return: 1 (success)
 */
int main(void)

{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);

}
