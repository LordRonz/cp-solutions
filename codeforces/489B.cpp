#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, m, input, i1 = 0, i2 = 0, res = 0;
	vector<int> a, b;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &input);
		a.push_back(input);
	}
	scanf("%d", &m);
	for(int i = 0; i < m; ++i) {
		scanf("%d", &input);
		b.push_back(input);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	while(i1 < n && i2 < m) {
		if(abs(a[i1] - b[i2]) < 2) {
			++res, ++i1, ++i2;
		}
		else if(a[i1] > b[i2]) ++i2;
		else if(a[i1] < b[i2]) ++i1;
	}
	printf("%d\n", res);
	return 0;
}