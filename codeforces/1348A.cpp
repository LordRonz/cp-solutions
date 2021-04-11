#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main() {
	long long t, n;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld", &n);
		long long temp = 0;
		long long tot = 0;
		for(int i = 1; i <= n; ++i) {
			tot += (int)pow(2, i);
		}
		for(int i = 1; i < n / 2; ++i) {
			temp += (int)pow(2, i);
		}
		temp += (int)pow(2, n);
		printf("%lld\n", abs(tot - temp - temp));
	}
	return 0;
}