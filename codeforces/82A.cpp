#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	long n, i = 5, cnt = 1;
	scanf("%ld", &n);
	while(n > i) {
		n -= i;
		cnt <<= 1;
		i <<= 1;
	}
	switch((int)ceil(n / (float)cnt)) {
		case 1:
			puts("Sheldon");
			break;
		case 2:
			puts("Leonard");
			break;
		case 3:
			puts("Penny");
			break;
		case 4:
			puts("Rajesh");
			break;
		case 5:
			puts("Howard");
			break;
	}
	return 0;
}