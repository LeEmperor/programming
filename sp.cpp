#include <iostream>
#include <algorithm>
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

void solve(string input) {
	vector<char> good {' '};
	vector<int> good2;
	vector<int> bad;
	string alphabet = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHHJKLZXCVBNM";
	string numbers = "1234567890";

	for(char c : alphabet) {
		good.PB(c);
	}

	for(char c : numbers) {
		good.PB(c);
	}	

	for(int i = 0; i < input.length(); i++) {
		if(count(all(good), input.at(i)) > 0) {
			// pass cuz its a chilling character
			good2.PB(i);
		} else {
			bad.PB(i);
		}
	}
	string solution = "";
	for(int i : good2) {
		solution.push_back(input.at(i));
	}

	cout << solution << nL;
	

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;
	cin.ignore(1);

	while(testcases--) {
		string line;
		getline(cin, line);
		solve(line);	
	}	

}

