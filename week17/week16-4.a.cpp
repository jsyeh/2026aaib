// week16-4a.cpp SOIT107_ADVANCE_004
#include <stdio.h>
int main()
{
	printf("Enter two integers: \n");
	int a, b;
	scanf("%d%d", &a, &b);
	int ans = 1;
	for (int i=1; i<=a; i++) {
		if (a%i==0 && b%i==0) ans = i;
	}
	printf("The greatest common divisor of %d and %d is ", a, b);
	printf("%d\n", ans);
}