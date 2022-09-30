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

string solve(string line) {
	int T = count(line.begin(), line.end(), 'T');
	int i = count(line.begin(), line.end(), 'i');
	int m = count(line.begin(), line.end(), 'm');
	int u = count(line.begin(), line.end(), 'u');
	int r = count(line.begin(), line.end(), 'r');

	if(T * i * m * u * r != 1) {return "NO";} else {return "YES";}

	return "bruh";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int i;
		cin >> i;
		if(i != 5) {
			string line;
			cin >> line;
			cout << "NO" << nL;
		} else {
			string line;
			cin >> line;
			cout << solve(line) << nL;
		}
	}	
}

