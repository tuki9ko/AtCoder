#include <iostream>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;

#define rep(i, n) for(int i = 0; i < n; ++i)

auto main() -> int{
	int n, q, t, u, v;
	cin >> n >> q;

	dsu d(n);

	rep(i, q){
		cin >> t >> u >> v;
		if(t){
			if(d.same(u, v)) cout << "1\n";
			else cout << "0\n";
		}else{
			d.merge(u, v);
		}
	}
}
