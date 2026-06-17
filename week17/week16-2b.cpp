// week16-2b.cpp SOIT106_ADVANCE_012
#include <stdio.h>
int main()
{
	int H[10] = {};
	int now;
	for (int i=0; i<20; i++) {
		scanf("%d", &now);
		H[now]++;
		if (now==0) break;
	}
	scanf("%d", &now); // test
	printf("%d\n", H[now]);
}