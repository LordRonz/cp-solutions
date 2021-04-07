#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, k, y, tot = 0;
	scanf("%d %d", &n, &k);
	while(n--) {
		scanf("%d", &y);
		if(y + k <= 5) {
			++tot;
		}
	}
	printf("%d\n", tot / 3);
}