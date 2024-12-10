#include <stdio.h>
void main()
{
    char alpha, i = 'a';

    printf("Skipping alphabets :");

    do
    {
        printf("\n %c", i);
        i += 4;
    } while (i <= 'z');
}