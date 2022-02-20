#include <bits/stdc++.h>

using namespace std;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

void preprocess(int arr[], int N, int left[], int right[]) 
{ 
    left[0] = 0; 
    int lastIncr = 0; 

    for (int i = 1; i < N; i++) 
    { 
        if (arr[i] > arr[i - 1]) 
            lastIncr = i; 
        left[i] = lastIncr; 
    } 

    right[N - 1] = N - 1; 
    int firstDecr = N - 1; 

    for (int i = N - 2; i >= 0; i--) 
    { 
        if (arr[i] > arr[i + 1]) 
            firstDecr = i; 
        right[i] = firstDecr; 
    } 
} 

int main() {
	int t, n, a[2 * MAX_N];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		int res = 0;
		int left[n], right[n];
		preprocess(a, n, left, right);
		for(int i = 0; i < n - 1; ++i) {
			if(right[i] >= left[n - 1]) {
				res = i;
				break;
			}
		}
		printf("%d\n", res);
	}
	return 0;
}