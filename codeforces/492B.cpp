#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, l, mx = -1, lan[1010], prev;
	scanf("%d %d", &n, &l);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &lan[i]);
	}
	sort(lan, lan + n);
	prev = 0;
	mx = max((lan[0] - prev) * 2, mx);
	for(int i = 0; i < n; ++i) {
		mx = max(lan[i] - prev, mx);
		prev = lan[i];
	}
	
	mx = max((l - prev) * 2, mx);
	printf("%lf\n", mx / 2.0);
	return 0;
}