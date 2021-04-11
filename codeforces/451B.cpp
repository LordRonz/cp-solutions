#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

bool isSorted(long *a, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		if(a[i] > a[i + 1])
			return 0;
	}
	return 1;
}

int main()
{
	long n, st, end;
	bool yes = true;
	scanf("%ld", &n);
	long a[n];
	for(int i = 0; i < n; ++i) {
		scanf("%ld", &a[i]);
	}
	for(int i = 0; i < n - 1; ++i) {
		if(a[i] > a[i + 1]) {
			yes = false;
			st = i;
			break;
		}
	}
	if(yes) {
		puts("yes\n1 1");
		return 0;
	}
	end = st;
	while(end < n - 1 && a[end] > a[end + 1]) ++end;
	reverse(a + st, a + end + 1);
	if(isSorted(a, n)) {
		puts("yes");
		printf("%ld %ld\n", ++st, ++end);
	}
	else {
		puts("no");
	}
	return 0;
}