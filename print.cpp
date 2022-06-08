#include <iostream>
#include <vector>
using namespace std;

#define exp 1e9
#define nL "\n"
#define all(x) x.begin(), x.end()

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef long long int ll;

void solve(ll i) {
	ll a = i / 3; // second place
	ll b = ((i / 3) + 1); // first place
	ll c = ((i / 3) - 1); // third place

	if(i % 3 == 0) {
		cout << a << ' ' << b << ' ' << c << nL;
	} else if(i % 3 == 1) {
		cout << a << ' ' << b + 1 << ' ' << c << nL;
	} else {
		cout << a + 1 << ' ' << b + 1 << ' ' << c << nL;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;
	ll i;

	while(testcases--) {
		cin >> i; 
		solve(i);
	}	

	return 0;
}

