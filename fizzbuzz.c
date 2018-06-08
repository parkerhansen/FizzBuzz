#include <stdio.h>

int main(void)
{
	int count=1;

	while(count<101)
	{
		if(count%3==0 && count%5==0)
		{
			printf("FizzBuzz, ");
			count++;
		}

		else if(count%3==0)
		{
			printf("Fizz, ");
			count++;
		}

		else if(count%5==0)
		{
			printf("Buzz, ");
			count++;
		}

		else
		{
			printf("%d, ", count);
			count++;
		}
	}
return 0;
}
