#include <stdio.h>

unsigned long genA(int n)
{
	unsigned long temp[n + 1];

	temp[0] = 1;
	temp[1] = 1;

	for (int i = 2; i <= n; i++)
	{
        temp[i] = 0;
        for (int j = 0; j < i; j++)
		{
            temp[i] += temp[j] * temp[i - j - 1];
		}
    }

	return temp[n - 1];
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    unsigned long result = genA(n);
    printf("The %d-th number in the sequence is: %lu\n", n, result);

    return 0;
}
