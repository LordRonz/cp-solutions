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
	int n, freq[105] = {}, a;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &a);
		++freq[a];
	}
	int res = 0;
	for(int i = 1; i < 101; ++i) {
		if(freq[i] > res) {
			res = freq[i];
		}
	}
	printf("%d\n", res);
	return 0;
}