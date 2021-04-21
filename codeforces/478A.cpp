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
	int c1, c2, c3, c4, c5;
	scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);
	int sum = c1 + c2 + c3 + c4 + c5;
	if(sum && sum % 5 == 0) {
		printf("%d\n", sum / 5);
	}
	else {
		puts("-1");
	}
	return 0;
}