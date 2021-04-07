#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, t, i = 0, ten = 1, res[10] = {};
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		i = 0;
		int b4 = 0;
		ten = 1;
		while(ten <= n) {
			ten *= 10;
			if(n % ten - b4 > 0) {
				res[i++] = n % ten - n % (ten / 10);
			}
			b4 = n % ten;
		}
		printf("%d\n", i);
		for(int j = 0; j < i; ++j) {
			printf("%d ", res[j]);
		}
		printf("\n");
	}
	return 0;
}