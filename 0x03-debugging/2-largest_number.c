#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number()
{
	int largest;
	double a, b, c;

  printf("Enter three numbers: ");
  scanf("%lf %lf %lf", &a, &b, &c);
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
