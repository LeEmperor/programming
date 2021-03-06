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
	string original = input.substr(0, input.find('|'));
	string flip = input.substr(input.find('|') + 1);

	cout << "original: " << original << nL;
	cout << "flip: " << flip << nL;

	reverse(original.begin(), original.end());
	if(original == flip) {
		cout << "chillin\n";
	} else {
		cout << "not chilling\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;
	string line;

	while(testcases--) {
		cin >> line; 
		solve(line);	
	}	
}

