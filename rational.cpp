#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <cstring>
using namespace std;

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

void solve(ll numerator, ll denominator) {
// implement a counter to see if we have gone to 10 partial pieces
    if(denominator % numerator != 0) {
        cout << denominator / numerator << " ";
        int temp = denominator - ((denominator / numerator) * numerator);
        denominator = numerator;
        numerator = temp;
        solve(numerator, denominator);
    } else {
        cout << denominator / numerator << " we done\n";
    }
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	string line;
    cin >> testcases;

	while(testcases--) {
		cin >> line; 
        ll numerator = stoi(line.substr(line.find(".") + 1));
        ll denominator = pow(10, (line.length() - line.find(".") - 1));
        if(line.at(0) != '.') {
            cout << line.at(0) << " ";
        }
        solve(numerator, denominator);
	}	
}
