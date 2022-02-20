#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int a = 6, b = 10, c = 14;
		switch(n - 30) {
			case 6:
			case 10:
			case 14:
				c = 15;
				break;
			default:
				break;
		}
		if(n <= a + b + c) {
			puts("NO");
			continue;
		}
		puts("YES");
		printf("6 10 %d %d\n", c, n - (a + b + c));
	}
	return 0;
}