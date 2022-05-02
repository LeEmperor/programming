#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <math.h>
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

void solve(char a, char b, map<char, int> val) {
	if(val[b] > val[a]) {
		// b is bigger than 1
		int stuff = 25 * (val[a] - 1);
		int answer = stuff + val[b] - 1;
		cout << answer << nL;
	} else {
		int stuff = 25 * (val[a] - 1);
		int answer = stuff + val[b];
		cout << answer << nL;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;
	char a, b;

	// maps each letter to a number;
	map<char, int> bruh;
	int g = 1;
	string dummy = "abcdefghijklmnopqrstuvwxyz";

	for(char c : dummy) {
		bruh[c] = g;
		g++;
	}

	while(testcases--) {
		cin >> a >> b;
		solve(a, b, bruh);	
	}	
}

