#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	unsigned long long n, b[200005], mncnt = 0, mxcnt = 0;
	long long mn = LONG_MAX, mx = 0;
	scanf("%llu", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%llu", &b[i]);
		if(mn > b[i]) {
			mn = b[i];
		}
		if(mx < b[i]) {
			mx = b[i];
		}
	}
	for(int i = 0; i < n; ++i) {
		if(b[i] == mn) ++mncnt;
		else if(b[i] == mx) ++mxcnt;
	}
	if(mx != mn)
		printf("%lld %llu\n", mx - mn, mncnt * mxcnt);
	else {
		unsigned long long res;
		res = (mncnt - 1) * (mncnt) / 2;
		printf("%lld %llu\n", mx - mn, res);
	}
	return 0;
}