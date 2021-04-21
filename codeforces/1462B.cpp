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
	char s[205];
	scanf("%d", &t);
	while(t--) {
        scanf("%d", &n);
        string s;
        cin >> s;
		bool yes = 0;
		for (int i = 0; i <= 4; i++) {
			if (s.substr(0, i) + s.substr(n - 4 + i, 4 - i) == "2020") {
				puts("YES");
				yes = 1;
                break;
			}
		}

		if(!yes) puts("NO");
	}
	return 0;
}