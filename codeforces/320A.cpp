#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define gcd __gcd
typedef pair<int, int> pii;
typedef long long ll;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

int main() {
	char n[15];
	int fours = 0;
	bool yes = 1;
	scanf("%s", n);
	for(int i = 0; n[i] != '\0'; ++i) {
		if(n[i] == '4') {
			if(i == 0) {
				yes = 0;
				break;
			}
			++fours;
		}
		else if(n[i] == '1') {
			fours = 0;
		}
		else {
			yes = 0;
			break;
		}
		if(fours > 2) {
			yes = 0;
			break;
		}
	}
	puts(yes ? "YES" : "NO");
	return 0;
}