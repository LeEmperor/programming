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


void solve(char* n) {
	int lps[n.length()];
	int* lps; // lps array;
	lps[0] = 0;


	int i = 1;
	int j = 0;
	while(i < n.length()) {
		if(n[i] == n[j]) {
			lps[i] = j + 1;
			j++;
			i++;
		} else {
		}

	}

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		string line;
		cin >> line;
		solve(line);
	}	
}

