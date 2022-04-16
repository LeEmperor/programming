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

bool lightOrDark(string input) {
    int row = stoi(input.substr(0, input.find(",")));
    int column = stoi(input.substr(input.find(',')+1));
    bool state = true; // true is light false is dark
    if (row % 2 == 0) {
        if (column % 2 != 0) {
            // even row odd column
            return false;
        }
    } else {
        if (column % 2 == 0) {
            // odd row even column
            return false;
        }
    }
    return true;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
    cin >> testcases;
    
	string line;
    string line2;
    string line3;

	while(testcases--) {
		cin >> line >> line2 >> line3;
		bool starter = lightOrDark(line2);
        bool target = lightOrDark(line3);
        if(starter == target) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
	}	
}
