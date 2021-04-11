#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))

typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, a;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &a);
		if(a >= 60 && a <= 180) {
			if(360 % (180 - a) == 0)
				puts("YES");
			else puts("NO");
		}
		else puts("NO");
	}
	return 0;
}