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

void solve(ll numerator, ll denominator, int increm) {
    if(denominator % numerator != 0) {
        if(increm < 10) {
            // cout << denominator / numerator << " ";
            cout << " " << denominator / numerator;
            ll temp = denominator - ((denominator / numerator) * numerator);
            denominator = numerator;
            numerator = temp;
            increm++;
            solve(numerator, denominator, increm);
        } else {
            cout << "\n";
        }
        
    } else {
        cout << " " << denominator / numerator << "\n";
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
        // this doenst even do anything so i dunno whats happening
        ll numerator = stoll(line.substr(line.find(".") + 1));
        ll denominator = pow(10, (line.length() - line.find(".") - 1));
        int increm = 0;
        if(line.at(0) != '.') {
            string temp0 = line.substr(0, line.find("."));
            cout << temp0;
            increm++;
        }
        solve(numerator, denominator, increm);
	}	
}
