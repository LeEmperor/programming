#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int testcases;
	int a, b;
	cin >> testcases;
	while(testcases--) {
		cin >> a >> b;
		cout << (a+b) << " " << (a*b) << "\n";	
	}
	return 0;	
}

