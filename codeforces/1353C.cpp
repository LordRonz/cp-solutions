#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, n;
	long long tot = 0;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		tot = 0;
		long long tmp = 0;
		int eight = (n >> 1) << 3;
		for(int i = 0; i < n / 2; ++i) {
			tmp += eight;
			tot += tmp;
			eight -= 8;
		}
		printf("%lld\n", tot);
	}
	return 0;
}