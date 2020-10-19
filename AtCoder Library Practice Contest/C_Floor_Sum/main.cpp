#include <iostream>
#include <atcoder/math>
using namespace std;
using namespace atcoder;

#define rep(i, n) for(int i = 0; i < n; ++i)

auto main() -> int {
	long long t, n, m, a, b;
	cin >> t;

	rep(i, t){
		cin >> n >> m >> a >> b;
		cout << floor_sum(n, m, a, b) << "\n";
	}
}