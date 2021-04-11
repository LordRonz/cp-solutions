#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, res = -1;
	string a;
	unordered_map<string, int> mp;
	scanf("%d", &n);
	while(n--) {
		cin >> a;
		if(mp.find(a) == mp.end()) {
			mp[a] = 1;
		}
		else ++mp[a];
	}
	for(auto& it: mp) {
		if(it.second > res) {
			res = it.second;
			a = it.first;
		}
	}
	cout << a << '\n';
	return 0;
}