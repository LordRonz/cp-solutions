#include<bits/stdc++.h>

using namespace std;

int main() {
	unordered_map<string, int> hash;
	int n;
	string t;
	cin >> n;
	while(n--) {
		cin >> t;
		if(hash.find(t) == hash.end()) {
			hash[t] = 0;
			cout << "OK\n";
		}
		else {
			++hash[t];
			t += to_string(hash[t]);
			cout << t << '\n';
		}
	}
	return 0;
}