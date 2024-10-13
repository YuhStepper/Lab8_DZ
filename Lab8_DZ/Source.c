#include <locale.h>
#include <stdio.h>
#include <math.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int N = 0;

	puts("¬ведите значение N: ");
	scanf("%d", &N);

	float result = 0.;
	float res = 0.;

	for (int i = 1; i <= N; ++i)
	{
		res = 1. / i;
		result += res;
	}

	printf("%.2f", result);
}