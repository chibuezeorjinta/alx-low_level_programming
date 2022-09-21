#include <stdio.h>


void main()
{
        int i, a;
	char name[] = "01234";

        i = 0;

        while (name[i] != '\n')
                i++;
	printf("%d", i);
}
