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
	char s[55];
	scanf("%d", &t);
	while(t--) {
        scanf("\n%s", s);
		for(int i = 0; s[i] != '\0'; ++i) {
			if(i & 1) {
				if(s[i] != 'z') s[i] = 'z';
				else s[i] = 'y';
			}
			else {
				if(s[i] != 'a') s[i] = 'a';
				else s[i] = 'b';
			}
		}
		printf("%s\n", s);
	}
	return 0;
}