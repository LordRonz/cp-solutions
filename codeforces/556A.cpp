#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, cnt[2] = {};
	char c;
	scanf("%d\n", &n);
	while((c = getchar()) != '\n' && c != EOF) {
		if(c == '1') ++cnt[1];
		else ++cnt[0];
	}
	printf("%d\n", abs(cnt[0] - cnt[1]));
	return 0;
}