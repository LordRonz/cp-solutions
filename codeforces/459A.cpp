#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int x1, y1, x2, y2;
	int x3, y3, x4, y4;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	if(x1 == x2) {
		x3 = x1 + (max(y2, y1) - min(y2, y1));
		x4 = x3;
		y3 = y1;
		y4 = y2;
	}
	else if(y1 == y2) {
		y3 = y1 + (max(x2, x1) - min(x2, x1));
		y4 = y3;
		x3 = x1;
		x4 = x2;
	}
	else {
		if(abs(x2 - x1) != abs(y2 - y1)) {
			puts("-1");
			return 0;
		}
		x3 = x1;
		y3 = y2;
		x4 = x2;
		y4 = y1;
	}
	printf("%d %d %d %d\n", x3, y3, x4, y4);
	return 0;
}