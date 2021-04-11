#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	unsigned y, w, num, denom = 6;
	scanf("%d %d", &y, &w);
	num = 7 - max(y, w);
	for(int i = 6; i > 0; --i) {
		if(num % i == 0 && denom % i == 0) {
			num /= i;
			denom /= i;
			break;
		}
	}
	printf("%d/%d\n", num, denom);
	return 0;
}