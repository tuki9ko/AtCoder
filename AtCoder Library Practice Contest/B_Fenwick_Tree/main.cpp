#include <iostream>
#include <atcoder/fenwicktree>
using namespace std;
using namespace atcoder;

#define rep(i, n) for(int i = 0; i < n; ++i)

auto main() -> int{
	int n, q;
	cin >> n >> q;

	fenwick_tree<long long> a(n);
	rep(i, n){
		int input;
		cin >> input;
		a.add(i, input);
	}

	int t, x, y;
	rep(i, q){
		cin >> t >> x >> y;
		if(t){
			cout << a.sum(x, y) << "\n";
		}else{
			a.add(x, y);
		}
	}
}