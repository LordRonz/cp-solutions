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
	int t, n;
	char s[MAX_N];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		scanf("\n%s", s);
		int zeroTot = 0, oneTot = 0;
		for(int i = 0; i < n; ++i) {
			if(s[i] == '1') {
				int zeros = 0;
				for(int j = i + 1; j < n; ++j) {
					if(s[j] == '0') {
						bool found = 0;
						for(int k = j + 1; k < n; ++k) {
							if(s[k] == '0') {
								found = 1;
								break;
							}
						}
						if(found) s[j] = '2';
						++zeros;
					}
				}
				if(zeros > 0) {
					for(int j = i; j < n; ++j) {
						if(s[j] == '1') s[j] = '2';
						if(s[j] == '0') break;
					}
				}
			}
		}
		for(int i = 0; i < n; ++i) {
			if(s[i] != '2')
				printf("%c", s[i]);
		}
		puts("");
	}
	return 0;
}