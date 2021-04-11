#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int n, t;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		while(n >= 0) {
			if(n % 2020 != 0)
				n -= 2021;
			else break;
		}
		puts(n < 0 ? "NO" : "YES");
	}
	return 0;
}