#include <iostream>
#include <vector>
#include <string>
#include <bitset> 
#include <cmath> 
#include <algorithm> 
using namespace std;

#define nL "\n"
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;
typedef vector<ll> Vll;
typedef pair<int, int> CRD;

void solve(vector<string> input) {
	int depth = input.size() / 2;
	int m = input.size();

	int answer = 0;

	for(int i = 0; i < depth; i++) {
		int layerTotal = 0;
		int c0 = 0;
		int c1 = 0;

		for(int j = i; j < (m - i); i++) {
			if(input[i][m-i] == 0) {c0++;} else {c1++;}
			if(input[m-i][m-j] == 0) {c0++;} else {c1++;}
			if(input[m-j][j] == 0) {c0++;} else {c1++;}

			if(c1 > c0) {
				layerTotal += c0;
			} else if(c0 > c1) {
				layerTotal += c1;
			} else {
				layerTotal += c0;
			}
		}

		answer += layerTotal;

	}

	
	return answer;
	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int i;
		cin >> i;
		solve(i);	
	}	
}

