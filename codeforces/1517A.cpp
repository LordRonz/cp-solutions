#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

//0xACCE97ED;

int main() {
    int t;
    ll n;
	scanf("%d", &t);
	while(t--) {
		scanf("%lld", &n);
        if(n % 2050 != 0) {
            puts("-1");
            continue;
        }
        ll a = n / 2050;
        int res = 0;
        for(char &c: to_string(a)) {
            res += c - '0';
        }
        printf("%d\n", res);
	}
	return 0;
}