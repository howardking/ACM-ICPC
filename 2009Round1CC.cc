#include <iostream>

using namespace std;

int P = 20, Q = 3, A[5] = {0, 3, 6, 14, 21};

int dp[4][5];

int min(int first, int second)
{
	return first<second?first:second;
}

void solve(void)
{
	for (int q=0; q<=Q; q++){
		dp[q][q+1] = 0;
	}

	for (int w=2; w<=Q+1; w++){
		for (int i=0; i+w<=Q+1; i++){
			int j = i+w;
			int t = 1000000;
			for (int k=i+1; k<j; k++){
				t = min(t,dp[i][k]+dp[k][i]);
			}
			dp[i][j] = t+A[j]-A[i]-2;
		}
	}
	cout << dp[0][Q+1] << endl;
}

int main(void)
{
	solve();
	return 0;
}
