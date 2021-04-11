#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))

typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, a, b;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &a, &b);
		if(a == b) {
			puts("0");
			continue;
		}
		if(a < b) {
			if((b - a) & 1) {
				puts("1");
			}
			else puts("2");
		}
		if(a > b) {
			if((b - a) & 1) {
				puts("2");
			}
			else puts("1");
		}
	}
	return 0;
}