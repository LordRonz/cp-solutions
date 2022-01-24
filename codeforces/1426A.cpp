#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, x;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &x);
		if(n == 1 || n == 2) {
			puts("1");
			continue;
		}
		n -= 2;
		printf("%d\n", (int)ceil(n / (float)x) + 1);
	}
	return 0;
}