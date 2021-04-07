#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int t, n, i;
	char s[105];
	scanf("%d", &t);
	while(t--) {
		scanf("%s", s);
		printf("%c", s[0]);
		for(i = 1; i < strlen(s) - 1; i += 2){
			printf("%c", s[i]);
		}
		printf("%c\n", s[strlen(s) - 1]);
	}
	return 0;
}