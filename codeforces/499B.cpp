#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, m;
	string s1, s2;
	unordered_map<string, string> hash;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < m; ++i) {
		cin >> s1 >> s2;
		hash[s1] = s1.length() > s2.length() ? s2 : s1;
	}
	for(int i = 0; i < n; ++i) {
		cin >> s1;
		cout << hash[s1] << ' ';
	}
	puts("");
	return 0;
}