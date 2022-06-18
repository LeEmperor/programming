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

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int n;
		int i;
		cin >> n;
		
		int nOdd = 0;
		int nEven = 0;
		while(n--) {
			cin >> i;
			if(i % 2 == 0) {
				nEven++;
			} else {
				nOdd++;
			}
		}
		cout << ((nOdd < nEven) ? nOdd : nEven) << nL;
	}	
}

