#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	char c[2];
	int n, m;
	bool bw = true;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			scanf("%s", c);
			if(c[0] == 'C' || c[0] == 'M' || c[0] == 'Y') bw = false;
		}
	}
	bw ? puts("#Black&White") : puts("#Color");
	return 0;
}