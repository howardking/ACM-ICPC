#include <iostream>

int n,s;
int a[MAX_N];
int sum[MAX_N+1];

using namespace std;

void solve(void)
{
	for(int i=0; i<n; i++){
		sum[i+1] = sum[i] + a[i];
	}
	if (sum[n]<S){
		printf("0\n");
		return;
	}

	int res = n;
	for (int s=0; sum[s]+S<=sum[n]; s++){
		int t = lower_bound(sum+s, sum+n, sum[s]+S)-sum;
		res = min(res, t-s);
	}

	printf("%d\n",res);
}

int main(void)
{
	solve();
	return 0;
}
