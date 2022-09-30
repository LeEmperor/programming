#include <iostream>
#include <vector>
#include <string>
#include <bitset> 
#include <cmath> 
#include <algorithm> 
#include <set>
using namespace std;

#define nL "\n"
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;
typedef vector<ll> Vll;
typedef vector<string> VS;
typedef vector<VS> VSS;
typedef pair<int, int> PII;
typedef pair<int, string> PIS;

string solve(VSS input) {
	int first;
	int second;
	int third;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < input.size(); j++) {
		}
	}

	for(int i = 0; i < input[0].size(); i++) {
		string word = input[0][i];
		bool bruh1 = false;
		bool bruh2 = false;
		bool bruh3 = false;

		if(find(all(input[1]), word) != input[1].end()) {
			// its in 2
			bruh2 = true;
		} 

		if(find(all(input[2]), word) != input[2].end()) {
			// its in 3
			bruh3 = true;
		}

		if(bruh2 == true && bruh3 == true) {
			// no points
			continue;
		}

		if(bruh2 == false && bruh3 == false) {
			first += 3;
			continue;
		}

		if(bruh2 == true && bruh3 == false) {
			first++;
			second++;
			continue;
		}

		if(bruh2 == false && bruh3 == true) {
			first++;
			third++;
		}
	}
	return "bruh";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int n;
		cin >> n;
		
		cout << solve(n) << nL;
	}	
}

