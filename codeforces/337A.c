#include <stdio.h>

int main(void)
{
	int n, m, f[110], key, i, j, min, t; 
	scanf("%d %d", &n, &m);
	for(i = 0; i < m; ++i) {
		scanf("%d", &f[i]);
	}
	for (i = 1; i < m; ++i) 
    {  
        key = f[i];  
        j = i - 1;  
        while (j >= 0 && f[j] > key) 
        {  
            f[j + 1] = f[j];  
            j = j - 1;  
        }  
        f[j + 1] = key;
    }
	min = f[m - 1] - f[0];
	for(i = 0; i <= m - n; ++i) {
		t = f[i + n - 1] - f[i];
		min = min > t ? t : min;
	}
	printf("%d\n", min);
	return 0;
}