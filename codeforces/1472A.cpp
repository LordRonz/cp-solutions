#include <bits/stdc++.h>
 
using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, w, h, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &w, &h, &n);
		unsigned tot = 1;
		while(!(w & 1) || !(h & 1)) {
			if(!(w & 1)) {
				w >>= 1;
				tot <<= 1;
			}
			if(!(h & 1)) {
				h >>= 1;
				tot <<= 1;
			}
		}
		tot >= n ? puts("YES") : puts("NO");
	} 
	return 0;
}