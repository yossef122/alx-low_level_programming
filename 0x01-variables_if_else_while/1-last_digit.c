#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* get the last digit and check if greater or equal or less than 5 */

/* betty style doc for function main goes there */
int main(void)
{
	char last[]="Last digit of";
	int n;
		
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        printf("%s %d is %d and is ", last, n, n % 10);

	if(n%10>5)
	{
	   	printf("greater than 5\n");
	}
	else if(n%10==0)
        {
                printf("0\n");
        }
	else
	{
 		printf("lsee than 6 and not0\n");	
	}
	return (0);
}
