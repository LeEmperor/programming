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

void solve(string input) {
	vector<char> vowels {'a', 'e', 'i', 'o', 'u'};
	vector<char> use;
	vector<int> goodString;
	string bruh = "";
	for(char c : input) {
		use.PB(c);
	}

	for(int i = 0; i < input.length(); i++) {
		if(count(vowels.begin(), vowels.end(), input.at(i)) > 0) {
			goodString.PB(i + 1);
			i++;
		}
	}

	for(int i : goodString) {
		bruh.push_back(input.at(i));
	}

	cout << bruh << nL;
	
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

