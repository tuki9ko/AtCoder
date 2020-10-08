#include <iostream>
#include <vector>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; ++i)

auto main() -> int{
	int n;
	vector<int> t, x, y;

	cin >> n;
	int tt, tx, ty;
	t.emplace_back(0);
	x.emplace_back(0);
	y.emplace_back(0);
	rep(i, n){
		cin >> tt >> tx >> ty;
		t.emplace_back(tt);
		x.emplace_back(tx);
		y.emplace_back(ty);
	}

	int dt, dist;
	bool canArrive = true;
	rep(i, n){
		dt = t[i+1] - t[i];
		dist = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
		if((dt < dist) || (dist % 2 != dt % 2)){
			canArrive = false;
			break;
		}
	}

	cout << (canArrive ? "Yes" : "No") << endl;
}
