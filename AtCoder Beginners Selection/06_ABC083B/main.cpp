#include <iostream>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; ++i)

int digit_sum(int n);

auto main() -> int{
	int n, a, b, ans, sum = 0;
	cin >> n >> a >> b;

	rep(i, n){
		ans = digit_sum(i+1);
		if(a <= ans && ans <= b ){
			sum += i+1;
		}
	}
	cout << sum << endl;
}

int digit_sum(int n){
	int ans = 0;
	while(n > 0){
		ans += n % 10;
		n /= 10;
	}
	return ans;
}