#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <bitset> 
#include <cmath> 
#include <algorithm> 
#include <array>
using namespace std;

#define nL "\n"
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;
typedef vector<ll> Vll;

void solve(int n, int m) {
	if(n == 0) {return;}
	if(n == 1) {
		while(n--) {
			cout << string(m / n, '*') << nL;
		}
		return;
	} else {
		int a[n];
		int r = m % n;
		int funny = 0;
		memset(a, m / n, sizeof(a));

		if(r == 0) {
			while(n--) {
				cout << string(m / n, '*') << nL;
			}
		} else {
			while(r--) {
				if(funny == n) {
					// at the end
					funny = 0;
				} else {
					a[funny]++;
				}
			}

			for(int b : a) {
				cout << string(b, '*') << nL;
			}
		}
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	solve(n, m);
}

