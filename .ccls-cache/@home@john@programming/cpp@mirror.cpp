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

typedef pair<int,int> CRD;

int bruh2(vector<string> input, vector<int> imposed, int depth, vector<pair<int, int>> coords) {
	int m = input.size();
	int n = imposed.size();
	for(int i = 0; i < n; i++) {
		// for every 
		int a = coords[i].first;
		int b = coords[i].second;
		int gridVal = input[a][b] - '0';

		CRD one(b, m-a);
		CRD two(m-a, m-b);
		CRD three(m-b, a);

		int cnt = 0;

		if(input[one.first][one.second] == gridVal) {
			// 90 degree rotation is equal to 0
		} else {
			cnt += 1;
		}

		if(input[two.first][two.second] == gridVal) {

		}

		


	}
	return 0;
}

int solve(vector<string> input) {
	int depth = input.size() / 2;
	int sizeInput = input.size();
	for(int i = 0; i < depth; i++) {
		// for each depth
		vector<int> imposeThese;
		vector<pair<int, int>> coords;
		for(int j = i; j < (sizeInput - ((2 * i) + 1)); j++) {
			int piece = input[i][j] - '0';
			imposeThese.push_back(piece);
			pair<int, int> coord(i, j);
			coords.push_back(coord);
		}
		

		int change = bruh2(input, imposeThese, i, coords);
		cout << change << nL;

	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int n;
		cin >> n;
		vector<string> input;
		for(int i = 0; i < n; i++) {
			string line;
			cin >> line;
			input.push_back(line);
		}

		cout << solve(input) << nL;
	}	
}

