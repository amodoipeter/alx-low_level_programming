#include "main.h"
#include <stdio.h>"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int main()
{
	int largest;
	double a, b, c;

  printf("Enter the first integer: ");
  scanf("%lf", &a);
  printf("Enter the second integer: ");
  scanf("%lf", &b);
  printf("Enter the third integer: ");
  scanf("%lf", &c);
	if (a >= b && a >= c)
		{
            printf("%.2lf is the largest number.", a);
		}
    else if (b >= a && b >= c)
		{
            printf("%.2lf is the largest number.", b);
		}
	else
		{
            printf("%.2lf is the largest number.", c);
		}

	return 0;
}
