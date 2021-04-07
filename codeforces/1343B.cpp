#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int t, n, sum;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		if((n / 2) & 1) {
			printf("NO\n");
			continue;
		}
		sum = 0;
		printf("YES\n");
		for(int i = 0; i < n / 2; ++i) {
			printf("%d ", (i + 1) * 2);
			sum += (i + 1) * 2;
		}
		for(int i = n / 2; i < n - 1; ++i) {
			printf("%d ", (i - n / 2) * 2 + 1);
			sum -= (i - n / 2) * 2 + 1;
		}
		printf("%d\n", sum);
	}
	return 0;
}