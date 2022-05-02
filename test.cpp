#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <cstring>
#include <sstream>
using namespace std;
// consider defining std for only string, cout, and cin 
<<<<<<< Updated upstream

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
=======

#define MP make_pair
#define PB push_back
#define exp 1e9
#define nL "\n"
#define sz(x) (int((x).size())) 
# define all(x) x.begin(), x.end()

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
	vector<bit> dataBits;
	vector<bit> parityBits;
	int l = input.length();
	int dummy = l;
	int cnt = 1;
	int cnt2 = 1;

	for(int i = 0; i < 31; i++) {
		powersOf2.PB(pow(2, i));
	}

	// while we havent reached the end of the list (cnt is less than the length of the input string),
	// we should loop through incrementing digits until all the data bits have been used
	while(l--) {
		while(count(all(powersOf2), cnt) > 0) {
			bit Bit = {true, cnt2};
			parityBits.PB(Bit);
			cnt++; cnt2++;
		}	

		int dummy2 = dummy - l;
		int data = input.at(dummy2) - '0';
		bit dataBit = {false, cnt2, data};

	}





	for(bit b : dataBits) {
		cout << "bit: " << b.encodingVal << " parity: " << ((b.parity == true) ? "true" : "false") << nL;
	}

	for(bit b : parityBits) {
		cout << "bit: " << b.encodingVal << " parity: " << ((b.parity == true) ? "true" : "false") << nL;
	}	



>>>>>>> Stashed changes

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

