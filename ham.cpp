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

void solve(int input) {
	int l = (to_string(input)).length(); 		
	string binaryForm = "";
	int dummy = input;

	// BEGIN BINARY CONVERTER
	while(dummy != 0) {
		if(dummy % 2 == 0) {
			binaryForm.append("0");
		} else {
			binaryForm.append("1");
		}
		dummy /= 2;
	}
	reverse(binaryForm.begin(), binaryForm.end());
	// END BINARY CONVERTER

	int c = count(binaryForm.begin(), binaryForm.end(), "1");

	cout << "c: " << c << nL;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;
	int line;

	while(testcases--) {
		cin >> line; 
		solve(line);	
	}	
}

