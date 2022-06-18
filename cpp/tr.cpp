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

void solve(int x, int y ) {
	int bruh;	

	if(x == y) {
		cout << "1 1" << nL;
	} else if(x > y) {
		cout << "0 0" << nL;
	} else if(y % x == 0) {
		cout << "1 " << ( y / x) << nL;
	} else {
		cout << "0 0" << nL;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;
	int x, y;

	while(testcases--) {
		cin >> x >> y; 
		solve(x, y);	
	}	
}

