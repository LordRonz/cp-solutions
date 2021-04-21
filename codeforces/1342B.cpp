#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
typedef pair<int, int> pii;
typedef long long ll;
//0xACCE97ED;

int main() {
	int t;
	char s[105];
	scanf("%d", &t);
	while(t--) {
		scanf("\n%s", s);
		char z = 0;
		char o = 0;
		for(int i = 0; s[i] != '\0'; ++i) {
			if(s[i] == '0') z = 1;
			else if(s[i] == '1') o = 1;
		}
		if(z == 0 || o == 0) {
			printf("%s\n", s);
			continue;
		}
		for(int i = 0; i < strlen(s); ++i) {
			printf("01");
		}
		puts("");
	}
	return 0;
}