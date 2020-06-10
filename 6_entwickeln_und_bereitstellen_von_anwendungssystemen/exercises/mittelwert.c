#include <stdio.h>

int main()
{
	float counter = -1.0;
	float sum = 0.0;
	int number = 1;

	while (number != 0) 
	{
		printf("Insert number: \n");
		scanf("%d", &number);

		sum += number;
		counter++;
	}

	float mean = sum / counter;

	printf("Sum: %f\n", sum);
	printf("Mean: %f\n", mean);

	return 0;
}
