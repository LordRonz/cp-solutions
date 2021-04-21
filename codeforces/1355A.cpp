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

int minDigit(long long a) {
	string s = to_string(a);
	int mn = 9;
	for(int i = 0; i < s.length(); ++i) {
		if(s[i] - '0' < mn) {
			mn = s[i] - '0';
		}
	}
	return mn;
}

int maxDigit(long long a) {
	string s = to_string(a);
	int mx = 0;
	for(int i = 0; i < s.length(); ++i) {
		if(s[i] - '0' > mx) {
			mx = s[i] - '0';
		}
	}
	return mx;
}

int main() {
	long long t, a, k;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld %lld", &a, &k);
		for(int i = 1; i < k; ++i) {
			int c = minDigit(a), d = maxDigit(a);
			if(c == 0) break;
			a += c * d;
		}
		printf("%lld\n", a);
	}
	return 0;
}