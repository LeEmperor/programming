#include <iostream>
#include <vector>
#include <string>
#include <bitset> 
#include <cmath> 
#include <algorithm> 
#include <cstring>
#include <array>
using namespace std;

#define nL "\n"
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;
typedef vector<ll> Vll;

void solve(string in) {
	if(in.length() > 3) {
		cout << "NO" << nL;
		return;
	} 
	if(in[0] == 'Y' | in[0] == 'y') {
		if(in[1] == 'E' | in[1] == 'e') {
			if(in[2] == 'S' | in[2] == 's') {
				cout << "YES" << nL;
			} else { cout << "NO" << nL;}
		} else { cout << "NO" << nL;}
	} else {
		cout << "NO" << nL;
		return;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		string line;
		cin >> line;
		solve(line);	
	}	
}

