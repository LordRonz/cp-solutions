#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	long n, k, tot = 0;
	int t;
	scanf("%d", &t);
	while(t--) {
		scanf("%ld %ld", &n, &k);
		tot = k;
		if(n == k) {
			printf("%ld\n", k + 1);
			continue;
		}
		if(n == 2) {
			printf("%ld\n", (k << 1) - 1);
			continue;
		}
		int tmp, rem = 0;
		while(1) {
			tmp = k;
			k += tmp / n - rem;
			rem = tmp / n;
			tot = k;
			if(k / n == tmp / n) {
				break;
			}

		}
		printf("%ld\n", tot);
	}
	return 0;
}