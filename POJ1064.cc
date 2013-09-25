#include <iostream>
#define MAX_N 4

using namespace std;

int N = 4, K = 11;
double L[MAX_N] = {8.02, 7.43, 4.57, 5.39};

int C(double x)
{
	int num = 0;
	for (int i=0; i<N; i++){
		num += (int)(L[i]/x); 
	}
	return num>=K;
}

void solve(void)
{
	double lb = 0, ub = 1000000;
	double mid = 0;
	for (int i=0; i<100; i++){
		mid = (lb+ub)/2;
		if (C(mid)){
			lb = mid;
		}else{
			ub = mid;
		}
	}
	cout << ub << endl;
}

int main(void)
{
	solve();
	return 0;
}
