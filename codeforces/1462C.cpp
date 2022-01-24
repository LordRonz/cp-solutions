#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, x;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &x);
		vector<int> ans;
		int sum = 0, last = 9;
		while (sum < x && last > 0) {
			ans.push_back(min(x - sum, last));
			sum += last;
			--last;
        }
		if(sum < x) {
			puts("-1");
			continue;
		}
		for(int i = ans.size() - 1; i >= 0; --i) {
			printf("%d", ans[i]);
		}
		puts("");
	}
	return 0;
}