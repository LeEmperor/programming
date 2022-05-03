#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <cstring>
#include <sstream>
#include <map>
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

void solve(string s, string t) {
	// case 1: characters in s are present in t		
	for(char c : s) {
		if(count(t.begin(), t.end(), c) > 0) {
			// there is an instance of a letter l from s in t
			cout << -1 << nL;
			break;
		}
	}	

	// case 2: both s and t are composed of the same thing
	if(count(s.begin(), s.end(), t) == s.length()) {
		cout << 1 << nL;
	} else if(s.length() != 1) {
		int bruh = 1;
		int len = s.length();
		for(int i = 1; i < len + 1; i++) {
			bruh *= i;
		}
		cout << bruh << nL;
	}

	// case 3:
	if(s.length() == 1) {
		cout << 2 << nL;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;
	string s, t;

	while(testcases--) {
		cin >> s >> t; 
		solve(s, t);	
	}	
}

