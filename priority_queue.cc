#include <queue>
#include <iostream>

using namespace std;

int main(void)
{
	priority_queue<int> pque;
	pque.push(3);
	pque.push(5);
	pque.push(1);
	pque.push(7);
	
	while (!pque.empty()){
		cout << pque.top()  << endl;
		pque.pop();
	}
	return 0;
}
