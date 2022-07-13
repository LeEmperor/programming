#include <iostream>
#include <array>
#include <cstring>
#include <set>
#include <vector>
#include <string>
#include <bitset> 
#include <map>
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

void solve(int wheels, VI final, vector<string> perms) {
	vector<int> start = final;

	for(int i = 0; i < wheels; i++) {
		string p = perms[i];
		int bruh2 = count(all(p), 'D') - count(all(p), 'U');
		start[i] = (start[i] + bruh2) % 10;	
		if(start[i] < 0) {
			start[i]+= 10;
		}
	}

	for(int i : start) {
		cout << i << ' ';
	}

	cout << nL;
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int wheels;
		VI final;
		vector<string> perms;

		cin >> wheels;

		for(int i = 0; i < wheels; i++) {
			int j;
			cin >> j;
			final.push_back(j);
		}

		for(int i = 0; i < wheels; i++) {

			int trash;
			cin >> trash;
			string permutation;
			cin >> permutation;
			perms.push_back(permutation);
		}
		solve(wheels, final, perms);
	}	
}

