#include <stdio.h>
#ifndef __FILE__
#define __FILE__
#endif
/*
 * main - entry to print own name
 * Return: 0 at success
 */
int main(void)
{
	printf("%s\n",__FILE__);
	return (0);
}
