#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n, m, a, pos = 1, tot = 0;
	scanf("%lld %lld", &n, &m);
	while(m--) {
		scanf("%lld", &a);
		if(a < pos) {
			tot += a + n - pos;
		}
		else
			tot += a - pos;
		pos = a;
	}
	printf("%lld\n", tot);
	return 0;
}