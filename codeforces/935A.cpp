#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, res = 0;
	scanf("%d", &n);
	for(int i = 1; i < n; ++i) {
		if(n % i == 0) ++res;
	}
	printf("%d\n", res);
	return 0;
}