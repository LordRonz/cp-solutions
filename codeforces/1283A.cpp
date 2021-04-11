#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, h, m;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &h, &m);
		printf("%d\n", (23 - h) * 60 + 60 - m);
	}
	return 0;
}