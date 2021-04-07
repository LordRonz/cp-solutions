#include<bits/stdc++.h>

using namespace std;

bool cmp( const vector<int>& v1, 
               const vector<int>& v2 ) { 
 return v1[0] < v2[0]; 
} 

int main() {
	int s, n;
	bool dead = false;
	scanf("%d %d", &s, &n);
	vector<vector<int>> x(n, vector<int>(2));
	for(int i = 0; i < n; ++i) {
		scanf("%d %d", &x[i][0], &x[i][1]);
	}
	sort(x.begin(), x.end(), cmp);
	for(int i = 0; i < n; ++i) {
		if(x[i][0] >= s) {
			dead = true;
			break;
		}
		else s += x[i][1];
	}
	if(dead) {
		printf("NO\n");
	}
	else
		printf("YES\n");
	return 0;
}