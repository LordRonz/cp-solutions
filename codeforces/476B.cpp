#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define gcd __gcd
typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

int solve(int n, int m) {
	int k = n - 1;

	int C = 1;
	for (int i = 1; i <= (int)ceil(n / 2.0); i++)
	{
		if(k-- == m) {
			return C;
		}
		C = C * (n - i) / i;
	}
	return 0;
}

int main() {
	int pl = 0, mn = 0, q = 0;
	char s1[20], s2[20];
	scanf("%s", s1);
	scanf("\n%s", s2);
	for(int i = 0; s1[i] != '\0'; ++i) {
		switch(s1[i]) {
			case '+':
				++pl;
				break;
			case '-':
				++mn;
				break;
		}
	}
	for(int i = 0; s2[i] != '\0'; ++i) {
		switch(s2[i]) {
			case '+':
				--pl;
				break;
			case '-':
				--mn;
				break;
			case '?':
				++q;
				break;
		}
	}
	if(pl < 0 || mn < 0) {
		printf("%.10lf\n", 0.0);
		return 0;
	}
	ld denom = pow(2, q);
	ld numer = solve(q + 1, max(pl, mn));
	printf("%.10Lf\n", numer / denom);
	return 0;
}