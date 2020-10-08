#include <iostream>
#include <regex>
using namespace std;

auto main() -> int{
	string s;
	cin >> s;

	cout << (regex_match(s, regex("(dream(er)?|eraser?)*")) ? "YES" : "NO") << endl;
}