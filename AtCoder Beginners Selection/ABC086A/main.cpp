#include <iostream>
using namespace std;
 
auto main() -> int {
	int a, b;
	cin >> a >> b;
	cout << ((a*b)%2 == 0 ? "Even" : "Odd") << endl;
}