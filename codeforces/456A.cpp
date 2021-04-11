#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, a, b;
	vector<pii> res;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d %d", &a, &b);
		res.push_back(make_pair(a, b));
	}
	sort(res.begin(), res.end(),
        [] (const auto& lhs, const auto& rhs) {
    return lhs.first < rhs.first;
});
	for(int i = 0; i < n - 1; ++i) {
		if(res[i].second > res[i + 1].second) {
			puts("Happy Alex");
			return 0;
		}
	}
	puts("Poor Alex");
	return 0;
}