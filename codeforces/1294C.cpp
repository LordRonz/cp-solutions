#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define gcd __gcd
typedef pair<int, int> pii;
typedef long long ll;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

bool isPrime(int n) {
    if (n < 2)
        return false;
    if (n < 4)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int a[3] = {};
		if(isPrime(n)) {
			puts("NO");
			continue;
		}
		for(long i = 2, j = 0; i * i < n && j < 3; ++i) {
			if(n % i == 0) {
				a[j++] = i;
				n /= i;
				if(j == 2) {
					if(a[1] < n)
						a[2] = n;
					break;
				}
			}
		}
		if(a[0] && a[1] && a[2]) {
			puts("YES");
			printf("%d %d %d\n", a[0], a[1], a[2]);
		}
		else puts("NO");
	}
	return 0;
}