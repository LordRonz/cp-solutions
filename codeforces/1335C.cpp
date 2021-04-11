#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, n, a, numcnt = 0, freq[200005] = {}, mxele = INT_MIN;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a);
			if(freq[a] == 0) ++numcnt;
			++freq[a];
			mxele = max(mxele, a);
		}
		int mx = INT_MIN;
		int mxIndex = 0;
		for(int i = 1; i <= mxele; ++i) {
			if(freq[i] > mx) {
				mx = freq[i];
				mxIndex = i;
			}
		}
		if(numcnt > mx) {
			printf("%d\n", mx);
		}
		else if(numcnt == mx) {
			printf("%d\n", mx - 1);
		}
		else {
			printf("%d\n", numcnt);
		}
		numcnt = 0;
		memset(freq, 0, sizeof(freq));
	}
	return 0;
}