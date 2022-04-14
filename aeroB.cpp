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

class starship {
    public:
        string ORIGINAL_LINE;
        string NAME;
        char CLASS;
        int X;
        int Y;
    
    public:
        starship(string x) {
                ORIGINAL_LINE = x;
                NAME = x.substr(0, x.find('_'));
                CLASS = x.at(x.find('_') + 1);
                X = stoi(x.substr(x.find(':') + 1, (x.find(',') - x.find(':') - 1)));
                Y = stoi(x.substr(x.find(',') + 1));
            }
};

void solve(vector<starship> starships) {
    cout << "Stuff";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	string line;

    cin >> testcases;

	while(testcases--) {
        vector<starship> input;
		cin >> line; 
		input.PB(starship(line));	
        solve(input);
	}
}
