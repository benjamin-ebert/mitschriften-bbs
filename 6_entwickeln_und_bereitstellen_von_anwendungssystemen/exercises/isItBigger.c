#include <stdio.h>

int main()
{
	int number_1;
	
	printf("Enter starting number: \n");
	scanf("%d", &number_1);

	int number_2 = number_1 + 1;

	while (number_2 >= number_1)
	{
		printf("Enter number to test: \n");
		scanf("%d", &number_2);

		if (number_2 == number_1)
		{
			printf("They are equal\n");
		}

		if (number_2 > number_1)
		{
			printf("%d is bigger than %d\n", number_2, number_1);
		}
	}

	printf("%d is smaller than %d\n", number_2, number_1);

	return 0;
}
