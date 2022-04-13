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
		char CLASS;
		int X;
		int Y;
		string ORIGINAL_LINE;

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
	for(int i = 0; i < starships.size(); i++) {
		starship toRemove = starships[0];
		int temp;
		for(int i = 1; i < starships.size(); i++) {
			if (starships[i].X < toRemove.X) {
				toRemove = starships[i];
				temp = i;
			}
		}
		starships.erase(starships.begin() + temp); // need the index of toRemove
		cout << "murder: " << toRemove.NAME << "\n";
	}

	for(starship s : starships) {
		cout << "the last remaining should be: " << s.NAME << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;
	cout << "---------------------------------------------------------\n\n";
	string line;
	vector<starship> input;

	while(testcases--) {
		cin >> line;
		input.PB(starship(line));
	}
	solve(input);
}
