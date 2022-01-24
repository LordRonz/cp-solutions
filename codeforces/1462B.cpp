#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n;
	char s[205];
	scanf("%d", &t);
	while(t--) {
        scanf("%d", &n);
        string s;
        cin >> s;
		bool yes = 0;
		for (int i = 0; i <= 4; i++) {
			if (s.substr(0, i) + s.substr(n - 4 + i, 4 - i) == "2020") {
				puts("YES");
				yes = 1;
                break;
			}
		}

		if(!yes) puts("NO");
	}
	return 0;
}