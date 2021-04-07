#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, e, p = 0, res = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &e);
		if(p == 0 && e == -1) {
			++res;
		}
		else if(e == -1){
			--p;
		}
		else {
			p += e;
		}
	}
	printf("%d\n", res);
	return 0;
}