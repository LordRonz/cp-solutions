#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, k, h[150005], mn = INT_MAX, mnIndex = 1, sum = 0;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &h[i]);
		if(k == 1 && h[i] == 1) {
			printf("%d\n", i + 1);
			return 0;
		}
		if(i < k) sum += h[i];
	}
	if(sum == k) {
		puts("1");
		return 0;
	}
	mn = sum;
	for(int i = k, j = 0; i < n; ++i, ++j) {
		sum += h[i] - h[j];
		if(sum < mn) {
			mn = sum;
			mnIndex = j + 2;
		}
	}
	printf("%d\n", mnIndex);
	return 0;
}