#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	long long a, b, x, y, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%lld %lld %lld %lld %lld", &a, &b, &x, &y, &n);
		int tmp;
		long long a1 = a, b1 = b, n1 = n, a2 = a, b2 = b, n2 = n;
		tmp = min(a1 - x, n1);
		a1 -= tmp;
		n1 -= tmp;
		tmp = min(b1 - y, n1);
		b1 -= tmp;
		tmp = min(b2 - y, n2);
		b2 -= tmp;
		n2 -= tmp;
		tmp = min(a2 - x, n2);
		a2 -= tmp;
		printf("%lld\n", min(a1 * b1, a2 * b2));
	}
	return 0;
}