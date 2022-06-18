#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <set>
#include <cstring>
#include <sstream>
using namespace std;
// consider defining std for only string, cout, and cin 

#define MP make_pair
#define PB push_back
#define exp 1e9
#define nL "\n"
#define sz(x) (int((x).size())) 
#define all(x) x.begin(), x.end()

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef long int l;
typedef unsigned long int ui;
typedef long long int ll;
typedef unsigned long long int ull;

struct ___ {

};

int solve(VI input) {
	set<int> bruh(all(input));
	if(bruh.size() == 1 && *bruh.begin() == 0) {
		// case entire thing is 0
		return 0;
	} else if(bruh.size() == 1) {
		// case its all j
		return input.size();
	}

	// case there is 0 in the array:
	for(int i : input) {
		if (i == 0) {
			return input.size() - 1;
		}
	}	

	// case all unique digits
	if(bruh.size() == input.size()) {
		return input.size() + 1;
	}

	// case some non-uniques
	return input.size();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	int i, j;
	cin >> testcases;

	while(testcases--) {
		VI input;
		cin >> i;
		while(i--) {
			cin >> j;
			input.PB(j);
		}
		cout << solve(input) << nL;
	}	
}
