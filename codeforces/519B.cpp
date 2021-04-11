#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, inp, res1, res2;
	vector<int> v1, v2;
	vector<int> res(2);
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &inp);
		v1.push_back(inp);
	}
	for(int i = 0; i < n - 1; ++i) {
		scanf("%d", &inp);
		v2.push_back(inp);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), res.begin());
	res1 = res[0];
	v1.clear();
	for(int i = 0; i < n - 2; ++i) {
		scanf("%d", &inp);
		v1.push_back(inp);
	}
	sort(v1.begin(), v1.end());
	set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), res.begin());
	res2 = res[0];
	printf("%d\n%d\n", res1, res2);
	return 0;
}