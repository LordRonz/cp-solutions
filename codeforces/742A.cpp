#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int n;
	scanf("%d", &n);
	if(n == 0) {
		puts("1");
		return 0;
	}
	switch(n % 4) {
		case 1:
			puts("8");
			break;
		case 2:
			puts("4");
			break;
		case 3:
			puts("2");
			break;
		case 0:
			puts("6");
			break;	
	}
	return 0;
}