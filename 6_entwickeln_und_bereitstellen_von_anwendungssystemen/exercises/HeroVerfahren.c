#include <stdio.h>

int main()
{
	float num;
	float a;
	float b = 1.00;

	printf("Zahl eingeben: \n");
	scanf("%f", num);

	a = num;

	while (a > b)
	{
		a = (a + b) / 2;
		b = num / a;
	}

	printf("Ergebnis: %f\n", b);

	return 0;
}
