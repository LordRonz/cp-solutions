#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, a, ones{0}, zeros{0}, zerosmax{-1};
	scanf("%d\n", &n);
	while(n--) {
		scanf("%d", &a);
		if(a) {
			++ones;
			if(zeros > 0)
				--zeros;
			continue;
		}
		++zeros;
		zerosmax = max(zeros, zerosmax);
	}
	printf("%d\n", ones + zerosmax);
	return 0;
}