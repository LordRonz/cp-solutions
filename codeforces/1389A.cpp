#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, l ,r;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &l, &r);
		printf("%d %d\n", l * 2 <= r ? l : -1, l * 2 <= r ? l * 2 : -1);
	}
	return 0;
}