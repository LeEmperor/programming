#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;

#define exp 1e9
#define nL "\n"
#define all(x) x.begin(), x.end()

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef long long int ll;
typedef vector<ll> Vll;

struct ___ {

};

void solve(vector<long unsigned> input) {
	sort(input.begin(), input.end());
	int cnt = 0;

	if(input.size() == 1) {
		cout << '1' << nL;
		return;
	}

	if(input.size() == 2) {
		if(input[0] == input[1]) {
			cout << '0' << nL;
		}
		return;
	}

	set<long unsigned> bruh;
	for(long unsigned x : input) {
		bruh.insert(x);

	}

	if(bruh.size() == 1) {
		cout << '0' << nL;
		return;
	}

	int dumy = 0;
	int nPairs = 0;
	for(long unsigned i = 0; i < input.size(); i++) {
		int internalCnt = 1;
		long unsigned original = input[i];
		if((i+1) == input.size()) {
			// if the last element
			break;
		} else {
			int temp = i;
			for(long unsigned j = temp + 1; j < input.size(); j++) {
				// cout << "i = " << i << " j = " << j << nL;

				if(input[j] == original) {
					i++;
					internalCnt++;
					// cout << "yes" << nL;
				}
			}
		}
		
		if(internalCnt != 1) {
			if(internalCnt % 2 == 0) {
				cnt += internalCnt;
				nPairs += (internalCnt / 2);
			} else {
				cnt += (2 * (internalCnt / 2));
				nPairs += (internalCnt / 2);
				dumy++;
			}
		} 
	}

	// cout << "nPairs: " << nPairs << nL;

	if(input.size() % 2 == 0) {
		if(nPairs == 0) {
			cout << input.size() << nL;
		} else if(dumy > 0) {
			// cout << nL << input.size() / nPairs << nL;
			cout << input.size() - (2*nPairs) << nL;
		} else if(nPairs == 1) {
			cout << input.size() - (2*nPairs) << nL;
		} else {
			cout << input.size() / nPairs << nL;
		}
	} else {
		if(nPairs == 0) {
			cout << input.size() << nL;
		} else {
			cout << input.size() - (2 * nPairs) << nL;
		}
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int n;
		cin >> n;
		long unsigned i;
		vector<long unsigned> input;

		while(n--) {
			cin >> i;
			input.push_back(i);
		}
		solve(input);	
	}	
}

