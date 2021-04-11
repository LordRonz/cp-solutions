#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int k, a[12], tot = 0;
	scanf("%d", &k);
	for(int i = 0; i < 12; ++i) {
		scanf("%d", &a[i]);
	}
	sort(a, a + 12);
	for(int i = 11; i >= 0; --i) {
		if(tot >= k) {
			printf("%d\n", 11 - i);
			return 0;
		}
		tot += a[i];
	}
	puts(tot >= k ? "12" : "-1");
	return 0;
}