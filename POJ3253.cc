#include <iostream>
typedef long long ll;

using namespace std;

int N = 5;
int L[5] = {3, 4, 5, 1, 2}; 

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

void solve()
{
  ll ans = 0;
  while (N>1){
    int mii1 = 0, mii2 = 1;
    if (L[mii1]>L[mii2]){
      swap(mii1,mii2);
    }

    for(int i=2; i<N; i++){
      if (L[i]<L[mii1]){
	mii2 = mii1;
	mii1 = i;
      }
      else if (L[i]<L[mii2]){
	mii2 = i;
      }
    }
    int t = L[mii1] + L[mii2];
    ans += t;

    if(mii1 == N-1){
      swap(mii1,mii2);
    }
    L[mii1] = t;
    L[mii2] = L[N-1];
    N--;
  }

  cout << ans << endl;
}

int main(void)
{
  solve();
  return 0;
}
