#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; ++i)

auto main() -> int{
	int n, di, ans = 0;
	list<int> d;
	list<int>::iterator ite;

	cin >> n;

	rep(i, n){
		cin >> di;
		d.emplace_back(di);
	}

	while(d.size() > 0){
		di = *max_element(d.begin(), d.end());
		d.remove(di);
		++ans;
	}

	cout << ans << endl;
}