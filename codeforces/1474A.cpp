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
	char newS[MAX_N];
	scanf("%d", &t);
	while(t--) {
        scanf("%d", &n);
		scanf("\n%s", s);
		for(int i = 0; i < n; ++i) {
			if(i == 0) {
				newS[i] = '1';
			}
			else {
				int a = s[i - 1] - '0';
				int b = newS[i - 1] - '0';
				int tmp = a + b;
				if(tmp == 2) {
					if(s[i] == '1') {
						newS[i] = '0';
					}
					else {
						newS[i] = '1';
					}
				}
				else if(tmp == 1) {
					if(s[i] == '1') {
						newS[i] = '1';
					}
					else {
						newS[i] = '0';
					}
				}
				else if(tmp == 0) {
					newS[i] = '1';
				}
			}
		}
		newS[strlen(s)] = '\0';
		printf("%s\n", newS);
	}
	return 0;
}