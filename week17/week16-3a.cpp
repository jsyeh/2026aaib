// week16-3a.cpp SOIT106_BASE_006
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a,&b,&c);
	int ans = a;
	if (b>ans) ans = b;
	if (c>ans) ans = c;
	printf("%d\n", ans);
}