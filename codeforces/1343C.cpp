#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	long long t, n, a[200005];
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld", &n);
		long long b(0);
		long long minus(INT_MIN);
		long long plus(INT_MIN);
		for(int i = 0; i < n; ++i) {
			scanf("%lld", &a[i]);
		}
		for(int i = 0; i < n; ++i) {
			if(a[i] < 0) {
				if(a[i] > minus) {
					minus = a[i];
				}
				if(i + 1 < n && a[i + 1] > 0) {
					b += minus;
					minus = INT_MIN;
				}
				else if(i + 1 == n) b += minus;
			}
			else if(a[i] > 0) {
				if(a[i] > plus) {
					plus = a[i];
				}
				if(i + 1 < n && a[i + 1] < 0) {
					b += plus;
					plus = INT_MIN;
				}
				else if(i + 1 == n) b += plus;
			}
		}
		printf("%lld\n", b);
	}
	return 0;
}