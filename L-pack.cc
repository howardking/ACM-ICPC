#include <iostream>
#include <algorithm>
#include <cstdio>

int n = 4;
int W = 5;
int w[4] = {2, 1, 3, 2};
int v[4] = {3, 2, 4, 2};
int dp[5][17];

using namespace std;

int min (int first, int second)
{
  return first<second?first:second;
}

void solve(void)
{
  fill(dp[0], dp[0]+17, 9);
  dp[0][0] = 0;
  for(int i=0; i<n; i++){
    for(int j=0; j<=16; j++){
      if (j<v[i]){
	dp[i+1][j] = dp[i][j];
      }else {
	dp[i+1][j] = min(dp[i][j], dp[i][j-v[i]]+w[i]);
      }
    }
  }
  int res = 0;
  for(int i=0; i<=16; i++){
    if(dp[n][i]<=W){
      res = i;
    }
  }
  cout << res << endl;
}

void print(void)
{
	int i,j;
	cout << "  " ;
	for (i=0; i<=16 ;i++){
		cout << "  "  << i << "  " ;
	}
	cout << endl;
	for (i=0; i<=n; i++){
		printf("%-2d",i);
		for (j=0; j<=16; j++){
			cout << "  " << dp[i][j] << "  " ;
		}
		cout << endl;
	}
}

int main(void)
{
  solve();
  print();
  return 0;
}

