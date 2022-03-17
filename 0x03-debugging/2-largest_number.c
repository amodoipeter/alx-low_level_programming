#include "main.h"
#include <stdlib.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int main()
{
    int a, b, c, result, max;
    printf("\nInput the first integer: "); 
    scanf("%d", &a);
    printf("\nInput the second integer: ");
    scanf("%d", &b);
    printf("\nInput the third integer: ");
    scanf("%d", &c);
    result=(a+b+abs(a-b))/2;
    max=(result+c+abs(result-c))/2;
    printf("\nMaximum value of three integers: %d", max);
	printf("\n");
    return 0;
}
