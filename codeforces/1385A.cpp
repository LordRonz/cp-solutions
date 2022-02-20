#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
//0xACCE97ED

int main()
{
	int t, x, y, z;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &x, &y, &z);
		if(max(x, y) == max(y, z) && max(x, y) == max(x, z)) {
			puts("YES");
			if(x == y && x == z) {
				printf("%d %d %d\n", x, y, z);
			}
			else {
				printf("%d %d %d\n", MAX(x, y, z), MIN(x, y, z), 1);
			}
		}
		else puts("NO");
	}
	return 0;
}