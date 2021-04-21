#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	long long t, x, y, a, b;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld %lld %lld %lld", &x, &y, &a, &b);
		bool yes = false;
		int i = 0;
		int tens = 1000000;
		while(x <= y) {
			if(x == y) {
				yes = true;
				break;
			}
			while(x + a * tens > y - b * tens && tens > 1) tens /= 10;
			x += tens * a;
			y -= tens * b;
			i += tens;
		}
		printf("%d\n", yes ? i : -1);
	}
	return 0;
}