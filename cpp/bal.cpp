#include <iostream>
#include <vector>
#include <string>
#include <bitset> 
#include <set>
#include <unordered_set>
#include <iterator>
#include <cmath> 
#include <algorithm> 
#include <array>
#include <cstring>

using namespace std;

#define nL "\n"
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;
typedef vector<ll> Vll;

void solve(string line) {
	set<int> bruh;

	for(char c : line) {
		bruh.insert(c);
	}
	int x = 0;
	x += (bruh.size() + line.length());
	cout << x << nL;
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int trash;
		cin >> trash;
		string line;
		cin >> line;
		solve(line);
	}	
}

