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

struct bit {
	bool parity;
	int encodingVal;
	int data;
};

void solve(string input) {
	vector<ll> powersOf2;
	vector<bit> bruh;
	string dummy = input;
	int l = input.length();
	int cnt = 0;
	int cnt2 = 0;

	for(int i = 0; i < 31; i++) {
		powersOf2.PB(pow(2, i));
	}

	for(int i = 0; i < l; i++) {
		ll use = i + 1;
		if(count(powersOf2.begin(), powersOf2.end(), use)) {
			bit Bit = {true};
			bruh.PB(Bit);
			cnt++;
		} else {
			bit Bit = {false};
			bruh.PB(Bit);
		}
	}	

	for(int i = 0; i < cnt; i++) {
		bit Bit = {false};
		bruh.PB(Bit);
	}

	// BEGIN ADD EMPTY PARITY BITS 	
	for(int i = 0; i < bruh.size(); i++) {
		bruh[i].encodingVal = (i + 1); 
		if (bruh[i].parity == false) {
			bruh[i].data = dummy.at(cnt2) - '0';
			cnt2++;
		}
	}	
	// END ADD EMPTY PARITY BITS 

	




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

