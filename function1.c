#include <stdio.h>

int math(int k)
{
	int k = 0;
	if (k == 0)
		return 0;
	return math(k - 1) + k;
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", math(a));

	return 0;
}