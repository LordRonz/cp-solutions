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
	int t, n, a[101];
	int freq[101];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		memset(freq, 0, sizeof(freq));
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
			++freq[a[i]];
		}
		int trgt = 0;
		for(int i = 1; i < 101; ++i) {
			if(freq[i] == 1) {
				trgt = i;
				break;
			}
		}
		for(int i = 0; i < n; ++i) {
			if(a[i] == trgt) {
				printf("%d\n", i + 1);
				break;
			}
		}
	}
	return 0;
}