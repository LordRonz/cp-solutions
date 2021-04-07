#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int m, s, t, i = 1;
	string a, b;
	scanf("%d %d", &m, &s);

    if (s == 0) {
        printf("%s\n", (m == 1 ? "0 0" : "-1 -1"));
        return 0;
    }
	while(m--) {
		t = min(s, 9);
		b += t + '0';
		s -= t;
	}
	if(s > 0) {
		printf("-1 -1\n");
		return 0;
	}
	a = string(b.rbegin(), b.rend());
	for (i = 0; a[i] == '0'; i++);
	++a[0], --a[i];
	cout << a << ' ' << b << "\n";
	return 0;
}