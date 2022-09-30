#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <bitset> 
#include <cmath> 
#include <sstream>
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

map<string, int> frequencyBuilder(string str) {
	map<string, int> M;

	string word = "";

	for(int i = 0; i < str.size(); i++) {
		if(str[i] == ' ') {
			if(M.find(word) == M.end()) {
				M.insert(make_pair(word, 1));
				word = "";
			} else {
				M[word]++;
				word = "";
			}
		} else {
			word += str[i];
		}
	}


	if(M.find(word) == M.end()) {
		M.insert(make_pair(word, 1));
	} else {
		M[word]++;
	}

	return M;

}

void solve(vector<vector<string>> input) {
	string bruh;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < input[i].size(); j++) {
			bruh.append(input[i][j]);
			bruh.append(" ");
		}
	}

	map<string, int> breakdown = frequencyBuilder(bruh);

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < input[i].size(); j++) {

		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int nWords;
		cin >> nWords;

		VSS input;
		for(int i = 0; i < 3; i++) {
			while(nWords--) {
				string word;
				cin >> word;
				input[i].push_back(word);
			}
		}

		solve(input);
	}	
}

