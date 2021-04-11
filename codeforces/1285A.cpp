#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, L = 0, R = 0;
	char c[100005];
	scanf("%d", &n);
	scanf("%s", c);
	for(int i = 0; i < n; ++i) {
		if(c[i] == 'L') ++L;
		else if(c[i] == 'R') ++R;
	}
	printf("%d\n", L + R + 1);
	return 0;
}