#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, a[100005], mx = 1, mxsofar = 1;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n - 1; ++i) {
		if(a[i] < a[i + 1]) {
			++mx;
		}
		else {
			mx = 1;
		}
		mxsofar = max(mx, mxsofar);
	}
	printf("%d\n", mxsofar);
	return 0;
}