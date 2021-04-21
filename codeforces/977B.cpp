#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
typedef pair<int, int> pii;
typedef long long ll;
//0xACCE97ED;

int main() {
	int n;
	string s;
	map<string, int> m;
	scanf("%d", &n);
	cin >> s;
	for(int i = 0; i < n - 1; ++i) {
		string t = s.substr(i, 2);
		if(m.find(t) == m.end()) {
			m[t] = 1;
		}
		else {
			++m[t];
		}
	}
	int cnt = -1;
	for(auto& a: m) {
		if(a.second > cnt) {
			cnt = a.second;
			s = a.first;
		}
	}
	cout << s << "\n";
	return 0;
}