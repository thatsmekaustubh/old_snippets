/* THE FIZZ BUZZ PROBLEM */

#include <stdio.h>

void main()
{
	int i=1;
	printf("\tTHE FIZZ BUZZ PROBLEM");
	while(i<100)	{
		printf("\n %d :",i);
		if(i%3==0)	printf("FIZZ");
		if(i%5==0)	printf("BUZZ");
		i++;
	}
}