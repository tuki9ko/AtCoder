#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; ++i)

auto main() -> int{
	int n, temp, i = 0;
	int sum[2] = {0, 0}; //0:alice, 1:bob
	list<int> cards;
	list<int>::iterator maxIte;

	cin >> n;
	rep(i, n){
		cin >> temp;
		cards.emplace_back(temp);
	}

	while(cards.size() > 0){
		maxIte = max_element(cards.begin(), cards.end());
		sum[i] += *maxIte;
		i ^= 1;
		cards.erase(maxIte);
	}

	cout << sum[0] - sum[1] << endl;
}