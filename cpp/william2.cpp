#include <iostream>
#include <vector>
#include <string>
#include <bitset> 
#include <cmath> 
#include <algorithm> 
#include <set>
using namespace std;

#define nL "\n"
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;
typedef vector<ll> Vll;
typedef vector<string> VS;
typedef vector<VS> VSS;
typedef pair<int, int> PII;
typedef pair<int, string> PIS;

int search(string s) {

	int l = s.length();
	int c = 0;
	for(int i = 0; i < l; i++) {

		if(i == l-2) {
			break;
		}

		if(s[i] == 'a') {
			if(s[i+1] == 'b') {
				if(s[i+2] == 'c') {
					c++;
					int dummy4 = 0;
					while(true) {
						if( (i + 1 + dummy4) > l) {
							// case we are out of bounds
							return c;
						}

						if(s[i+1+dummy4] != 'a') {
							dummy4++;
						} else {
							i += dummy4;
							break;
						}
					}
				} else {
					int dummy3 = 0;
					while(true) {
						if( (i + 1 + dummy3) > l) {
							return c;
						}

						if(s[i+1+dummy3] != 'a') {
							dummy3++;
						} else {
							i += dummy3;
							break;
						}
					}
				}
			} else {
				int dummy2 = 0;
				while(true) {
					if( (i + 1 + dummy2) > l) {
						return c;
					}

					if(s[i+1+dummy2] != 'a') {
						dummy2++;
					} else {
						i += dummy2;
						break;
					}
				}
			}
		} else {
			int dummy = 0;
			while(true) {
				if( (i + dummy + 1) > l) {
					return c;
				}

				if(s[i+1+dummy] != 'a') {
					dummy++;
				} else {
					i += dummy;
					break;
				}
			}
		}
	}
	return c;
}

void solve(string s, int q) {
	while(q--) {
		int i;
		char c;
		cin >> i >> c;
		s[i-1] = c;
		cout << search(s) << nL;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, q;
	cin >> n >> q;

	string s;
	cin >> s;

	solve(s, q);
}

