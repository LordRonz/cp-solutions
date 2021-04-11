#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	char s[3];
	char t[3];
	bool yes = false;
	scanf("%s", s);
	for(int i = 0; i < 5; ++i) {
		scanf("%s", t);
		if(s[0] == t[0] || s[1] == t[1]) yes = true;
	}
	yes ? puts("YES") : puts("NO");
	return 0;
}