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
#define all(x) (x).begin(), (x).end()
#define nL "\n"
#define first a
#define second b
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
		string NAME; 
		string CLASS;
		int X;
		int Y;
	
	public:
		starship(string x, string y, int z, int w) {
			NAME = x;
			CLASS = y;
			X = z;
			Y = w;
		}
};

void solve(VS input) {
	char *ptr;
	for(string s : input) {
		cout << "line: " << s << "\n";
		ptr = strtok(s, ",");
		// this is random shit code dont use this for now while i learn about pointers
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int testcases;
	int dummy;
	string line;

	cin >> testcases;
	cout << "testcases inputted\n";
	while(testcases--) {
		cin >> dummy;
		VS input;
		while(dummy--) {
			cin >> line;		
			input.PB(line);
		}
		solve(input);

	}
}

