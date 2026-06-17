// week16-8.cpp SOIT108_Advance_004
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int ans = 0;
	for (int i=1; i<=N; i++) {
		ans = ans + 11*i;
	}
	printf("%d", ans);
}