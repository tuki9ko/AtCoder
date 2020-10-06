#include <iostream>
using namespace std;

#define repeq(i, n) for(int i = 0; i <= (int)(n); ++i)

auto main() -> int{
	int a, b, c, x, count = 0;
	cin >> a >> b >> c >> x;

	repeq(i, a){
		repeq(j, b){
			repeq(k, c){
				if((500 * i + 100 * j + 50 * k) == x){
					++count;
					break;
				}
			}
		}
	}
	cout << count << endl;
}