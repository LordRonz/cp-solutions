#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	if(min(m, n) & 1) {
		printf("Akshat\n");
	}
	else
		printf("Malvika\n");
	return 0;
}