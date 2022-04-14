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
	while(starships.size() > 0) {
		starship smallest = starships[0];
		int temp = 0;
		for(int i = 0; i < starships.size(); i++) {
			if(starships[i].NAME != smallest.NAME) {
				if(starships[i].X < smallest.X) {
					smallest = starships[i];
					temp = i;
				}
			}
		}
		cout << "Destroyed Ship: " << starships[temp].NAME << " xLoc: " << starships[temp].X << "\n";
		starships.erase(starships.begin() + temp);
		//begin coordinate editor
		for(int i = 0;i < starships.size(); i++) {
			switch(starships[i].CLASS) {
				case 'A':
					starships[i].X -= 10;
					break;
				case 'B':
					starships[i].X -= 20;
					break;
				case 'C':
					starships[i].X -= 30;
					break;
			}
		}
		//end coordinate editor
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	int temp0;
	string line;

	cin >> testcases;

	while(testcases--) {
		cin >> temp0;
		vector<starship> input;
		while(temp0--) {
			cin >> line;
			input.PB(starship(line));
		}
		solve(input);
	}
}
