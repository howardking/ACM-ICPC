#include <iostream>

int n = 10;
int a[10] = {5, 1, 2, 7, 8, 3, 9, 4, 6, 10};
int dp[10];

using namespace std;

int max(int first, int second)
{
	return first>second?first:second;
}

void solve(void)
{
	int res = 0;
	for (int i=0; i<n; i++){
		dp[i] = 1;
		for (int j=0; j<i; j++){
			if (a[j]<a[i]){
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
		res = max(res, dp[i]);
	}	
	cout << res << endl;
}

int main(void)
{
	solve();
	return 0;
} 
