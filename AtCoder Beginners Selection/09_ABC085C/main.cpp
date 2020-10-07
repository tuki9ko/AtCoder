#include <iostream>
using namespace std;

#define repeq(i, n) for(int i = 0; i <= n; ++i)

auto main() -> int{
	int n, y;
	cin >> n >> y;

	repeq(i, n){
		repeq(j, n - i){
			int k = n - i - j;
			if(i+j+k == n && i*10000 + j*5000 + k*1000 == y){
				cout << i << " " << j << " " << k << endl;
				return 0;
			}
		}
	}

	cout << "-1 -1 -1" << endl;
}