// week16-3b.cpp SOIT106_BASE_006
#include <stdio.h>
int main()
{
	int now, ans;
	scanf("%d", &ans);
	
	scanf("%d", &now);
	if (now>ans) ans = now;

	scanf("%d", &now);
	if (now>ans) ans = now;
	
	printf("%d\n", ans);
}