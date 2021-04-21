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
	int q;
	char s1[50], s2[50];
	scanf("%d", &q);
	while(q--) {
		scanf("\n%s", s1);
		scanf("\n%s", s2);
		int len1 = strlen(s1), len2 = strlen(s2);
		int i = 0;
		int n1 = -1, n2 = -1;
		for(; i < len1; ++i) {
			bool yes1 = 1, yes2 = 1;
			if(len1 % (i + 1) == 0 && len2 % (i + 1) == 0) {
				
				for(int j = 0, k = 0; j < len1; ++j) {
					if(s1[j] != s1[k]) {
						yes1 = 0;
						break;
					}
					k = k == i ? 0 : k + 1;
				}
				if(yes1) {
					for(int j = 0, k = 0; j < len2; ++j) {
						if(s2[j] != s1[k]) {
							yes2 = 0;
							break;
						}
						k = k == i ? 0 : k + 1;
					}
				}
			}
			else yes1 = 0, yes2 = 0;
			if(yes1 && yes2) {
				n1 = len1 / (i + 1);
				n2 = len2 / (i + 1);
				break;
			}
		}
		if(n1 == -1 && n2 == -1) {
			puts("-1");
			continue;
		}
		int res = lcm(n1, n2);
		for(int j = 0; j < res; ++j) {
			for(int k = 0; k <= i; ++k) {
				printf("%c", s1[k]);
			}
		}
		puts("");
	}
	return 0;
}