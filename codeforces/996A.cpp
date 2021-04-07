#include<bits/stdc++.h>

using namespace std;

int main() {
	long long n;
	int t = 0;
	scanf("%lli", &n);
	t += n / 100;
	n %= 100;
	t += n / 20;
	n %= 20;
	t += n / 10;
	n %= 10;
	t += n / 5;
	n %= 5;
	t += n;
	printf("%d\n", t);
	return 0;
}