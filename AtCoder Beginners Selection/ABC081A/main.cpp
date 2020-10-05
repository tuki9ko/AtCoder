#include <iostream>
using namespace std;

auto main() -> int {
	string a;
	int b, ans = 0;
	cin >> a;

	b = stoi(a, 0, 2);
	do{
		ans += (b&0x1) == 1 ? 1 : 0;
	}while((b >>= 1) != 0);
	
	cout << ans << endl;
}
