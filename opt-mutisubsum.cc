#include <iostream>
#include <cstring>

using namespace std;

int n = 3;
int K = 17;
int a[3] = {3, 5, 8};
int m[3] = {3, 2, 2};
int  dp[18];

void solve(void)
{
	memset(dp, -1, sizeof(dp));
	dp[0] = 0;
	for (int i=0; i<n; i++){
		for (int j=0; j<=K; j++){
			if (dp[j]>=0){
				dp[j] = m[i];
			}else if((j<a[i])||dp[j-a[i]]<=0){
				dp[j] = -1;
			}else {
				dp[j] = dp[j-a[i]] - 1;
			}
		}
	}
	if (dp[K]>=0){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}

int main(void)
{
	solve();
	return 0;
}
