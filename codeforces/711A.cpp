#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n;
	char a[1005][4];
	bool yes = false;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("\n%c%c|%c%c", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
		if(!yes) {
			if(a[i][0] == 'O' && a[i][0] == a[i][1]) {
				a[i][0] = '+';
				a[i][1] = '+';
				yes = true;
			}
			else if(a[i][2] == 'O' && a[i][2] == a[i][3]) {
				a[i][2] = '+';
				a[i][3] = '+';
				yes = true;
			}
		}
	}
	if(yes) puts("YES");
	else {
		puts("NO");
		return 0;
	}
	for(int i = 0; i < n; ++i) {
		printf("%c%c|%c%c\n", a[i][0], a[i][1], a[i][2], a[i][3]);
	}
	return 0;
}