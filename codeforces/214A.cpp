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

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int cnt = 0;
	for(int i = 0; i < 1001; ++i) {
		for(int j = 0; j < 1001; ++j) {
			int a = i * i + j;
			int b = i + j * j;
			if(a == n && b == m) {
				++cnt;
				break;
			}
			if(a > n || b > m) {
				break;
			}
		}
	}
	printf("%d\n", cnt);
	return 0;
}