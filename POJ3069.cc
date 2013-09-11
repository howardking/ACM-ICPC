#include <iostream>
#include <algorithm>
using namespace std;

int N = 6;
int R = 10;
int X[100]={1, 7, 15, 20, 30, 50};

//id sort(int *start, int *end)
//{
  
//}

void solve(void)
{
  sort(X,X+N);
  int i = 0;
  int ans = 0;
  while (i<N){
    int s = X[i++];
    while (i<N && X[i]<=s+R){
      i++;
    }
    int p = X[i-1];
    while (i<N&&X[i]<=p+R){
      i++;
    }
    ans++;
  }
  cout << ans << endl;
}

int main(void)
{
  solve();
  return 0;
}
