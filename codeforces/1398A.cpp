#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b); 
}

int main()
{
	int n, a[50005], t;
	bool simon{true};
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		int i = 0, j = 1, k = n - 1;
		bool found = false;
		while(i < k && j < k) {
			if(a[i] + a[j] <= a[k]) {
				printf("%d %d %d\n", i + 1, j + 1, k + 1);
				found = true;
				break;
			}
			++i, ++j, --k;
		}
		if(!found) puts("-1");
	}
	return 0;
}