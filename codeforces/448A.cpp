#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
typedef pair<int, int> pii;
typedef long long ll;
//0xACCE97ED;

int main() {
	int a1, a2, a3, b1, b2, b3, n;
	scanf("%d %d %d", &a1, &a2, &a3);
	scanf("%d %d %d", &b1, &b2, &b3);
	scanf("%d", &n);
	int a = a1 + a2 + a3;
	int b = b1 + b2 + b3;
	n -= a / 5 + (a % 5 == 0 ? 0 : 1);
	n -= b / 10 + (b % 10 == 0 ? 0 : 1);
	puts(n < 0 ? "NO" : "YES");
	return 0;
}