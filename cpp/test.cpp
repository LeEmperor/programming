#include<bits/stdc++.h>
using namespace std;

#define nL "\n"
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;
typedef vector<ll> Vll;

void solve(VI input) {
	sort(all(input));	

	for(int x:input) {
		cout << x << nL;
	}
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

