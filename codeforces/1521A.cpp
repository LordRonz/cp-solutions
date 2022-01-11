#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

//0xACCE97ED;

int main() {
	ll a, b;
    int t;
	scanf("%d", &t);
	while(t--) {
		scanf("%lld %lld", &a, &b);
        if(b == 1) {
            puts("NO");
            continue;
        }
        ll x, y, z;
        x = a * (b - 1);
        y = a * b;
        z = x + y;
        puts("YES");
        printf("%lld %lld %lld\n", x, y, z);
	}
	return 0;
}