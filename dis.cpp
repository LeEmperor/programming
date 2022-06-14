#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

#define nL "\n"
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

typedef vector<int> VI;
typedef long long ll;
typedef vector<ll> Vll;

struct ___ {

};

void solve(VI input) {
	set<int> bruh;
	for(int x : input) {
		bruh.insert(x);
	}

	cout << (sz(input) - sz(bruh) + 1) / 2 << nL;
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int n;
		cin >> n;
		VI input;
		while(n--) {
			int i;
			cin >> i;
			input.push_back(i);
		}

		solve(input);
	}	
}

