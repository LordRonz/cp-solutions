#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	char s[205];
	int dot = 0, dash = 0;
	scanf("%s", s);
	for(int i = 0; s[i] != '\0'; ++i) {
		if(s[i] == '-') {
			++dash;
		}
		else if(s[i] == '.')++dot;
		if(dot == 1 && dash == 0) {
			fputs("0", stdout);
			dot = 0;
		}
		else if(dash == 1 && dot == 1) {
			fputs("1",stdout);
			dash = 0;
			dot = 0;
		}
		else if(dash == 2 && dot == 0) {
			fputs("2", stdout);
			dash = 0;
		}
	}
	puts("");
	return 0;
}