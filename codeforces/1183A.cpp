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
	int a;
	scanf("%d", &a);
	int tot = 0;
	string s = to_string(a);
	for(char& c: s) {
		tot += c - '0';
	}
	while(tot % 4 != 0) {
		++a;
		tot = 0;
		string s = to_string(a);
		for(char& c: s) {
			tot += c - '0';
		}
	}
	printf("%d\n", a);
	return 0;
}