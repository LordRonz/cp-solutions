#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int primes[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < 16; ++i) {
		if(primes[i] == n) {
			puts(primes[i + 1] == m ? "YES" : "NO");
			break;
		}
	}
	return 0;
}