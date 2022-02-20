#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	int t, n, a, freq[55] = {};
	vector<int> ans;
	scanf("%d", &t);
	while(t--) {
		scanf("%d\n", &n);
		n <<= 1;
		while(n--) {
			scanf("%d", &a);
			if(freq[a] == 0) {
				ans.push_back(a);
				++freq[a];
			}
		}
		memset(freq, 0, sizeof(freq));
		for(int &i: ans) {
			printf("%d ", i);
		}
		ans.clear();
		puts("");
	}
	return 0;
}