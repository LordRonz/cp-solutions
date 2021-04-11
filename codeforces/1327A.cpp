#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	long long t, n, k;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld %lld", &n, &k);
		if((k * k) > n) {
			puts("NO");
			continue;
		}
		if(n & 1 && k & 1) {
			puts("YES");
		}
		else if(n & 1) {
			puts("NO");
		}
		else if(!(n & 1) && !(k & 1)) {
			puts("YES");
		}
		else if(!(n & 1)){
			puts("NO");
		}
	}
	return 0;
}