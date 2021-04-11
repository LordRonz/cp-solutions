#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, n, a;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		bool yes = false;
		bool odd = false;
		bool evn = false;
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a);
			if(n & 1) {
				if(a & 1) yes = true;
			}
			else {
				if(a & 1) {
					odd = true;
				}
				else if(!(a & 1)) {
					evn = true;
				}
				if(odd && evn) yes = true;
			}
		}
		if(yes) puts("YES");
		else puts("NO");
	}
	return 0;
}