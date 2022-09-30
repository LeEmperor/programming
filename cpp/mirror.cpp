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

int bruh2(vector<string> input, vector<int> imposed, int depth, vector<CRD> coords) {
	int m = input.size();
	int n = imposed.size();
	int total = 0;

	for(int i = 0; i < n; i++) {
		// for every cardinal side

		int cnt0 = 0;
		int cnt1 = 0;

		if(input[coords[i].first][m-coords[i].first] == 0) {cnt0++;} else {cnt1++;}
		if(input[m-coords[i].first][m-coords[i].second] == 0) {cnt0++;} else {cnt1++;}
		if(input[m-coords[i].second][coords[i].second] == 0) {cnt0++;} else {cnt1++;}

		if(cnt0 > cnt1) {total += cnt1;} else if(cnt1 > cnt0) {total += cnt0;} else {total += cnt0;}	
	}
	return total;
}

int solve(vector<string> input) {
	int depth = input.size() / 2;
	int sizeInput = input.size();
	int total = 0;

	for(int i = 0; i < depth; i++) {
		// for each depth
		vector<int> imposeThese;
		vector<pair<int, int>> coords;

		for(int j = i; j < (sizeInput - i); j++) {
			int piece = input[i][j] - '0';

			imposeThese.push_back(piece);
			pair<int, int> coord(i, j);
			coords.push_back(coord);
		}

		int change = bruh2(input, imposeThese, i, coords);
		total += change;
	}
	return total;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int testcases;

	while(testcases--) {
		int n;
		cin >> n;
		vector<string> input;

		for(int i = 0; i < n; i++) {
			string line;
			cin >> line;
		}

		cout << solve(input) << nL;
	}	
}

