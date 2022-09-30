#include <iostream>
#include <vector>
#include <string>
#include <bitset> 
#include <cmath> 
#include <algorithm> 
using namespace std;

#define nL "\n"
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;
typedef vector<ll> Vll;

string solve(string first, string second) {
	for(int i = 0; i < first.length(); i++) {
		if(first[i] == 'R') {
			if(second[i] != 'R') {
				return "NO";
			}
		}

		if(second[i] == 'R') {
			if(first[i] != 'R') {
				return "NO";
			}
		}

	}
	return "YES";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int i;
		cin >> i;
		string one, two;
		cin >> one >> two;
		cout << solve(one, two) << nL;
	}	
}

