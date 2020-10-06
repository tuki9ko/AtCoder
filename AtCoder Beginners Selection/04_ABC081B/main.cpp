#include <iostream>
using namespace std;

bool check(int N, int* a);

auto main() -> int{
	int N;
	int ans;
	bool is_all_ven;
	cin >> N;

	int a[N];
	for(int i = 0; i < N; ++i){
		cin >> a[i];
	}

	int b = 0;
	while(check(N, a)){
		for(int i = 0; i < N; ++i){
			a[i] /= 2;
		}
		++b;
	}

	cout << b << endl;
}

bool check(int N, int* a){
	for(int i = 0; i < N; ++i){
		if(a[i]%2!=0) return false;
	}
	return true;
}