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
	int t, px, py;
	int u, d, r, l;
	char s[100005];
	scanf("%d", &t);
	while(t--) {
		u = 0, d = 0, r = 0, l = 0;
		scanf("%d %d", &px, &py);
		scanf("%s", s);
		for(int i = 0; s[i] != '\0'; ++i) {
			switch(s[i]) {
				case 'U':
					++u;
					break;
				case 'D':
					++d;
					break;
				case 'R':
					++r;
					break;
				case 'L':
					++l;
					break;
			}
		}
		if(px > 0) {
			if(px > r) {
				puts("NO");
				continue;
			}
		}
		else {
			if(abs(px) > l) {
				puts("NO");
				continue;
			}
		}
		if(py > 0) {
			if(py > u) {
				puts("NO");
				continue;
			}
		}
		else {
			if(abs(py) > d) {
				puts("NO");
				continue;
			}
		}
		puts("YES");
	}
	return 0;
}