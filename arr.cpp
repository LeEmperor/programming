#include <iostream>
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

void solve(VI input1, VI input2) {
	signed int diff;
	int continueFrom = 0;
	set<int> diffs;
	
	if(input1[0] >= input2[0] && input1.size() == 1) {
		cout << "yes" << nL;
		return;
	} else if(input1[0] < input2[0] && input1.size() == 1) {
		cout << "no" << nL;
		return;
	}
	
	bool bruh = true;
	for(int i = 0; i < input1.size(); i++) {
		if(input1[i] == input2[i]) {
		} else {
			bruh = false;
			break;
		} 
	}

	if(bruh == true) {
		cout << "yes" << nL;
		return;
	}
	
	for(int i = 0; i < input1.size(); i++) {
		if(input1[i] < input2[i]) {
			cout << "no" << nL;
			return;
		}
	}
	
	// identify a base diff to compare
	for(int i = 0; i < input1.size(); i++) {
		if(input2[i] != 0) {
			diff = input1[i] - input2[i];
			continueFrom = i;
			break;
		}

	}	

	for(int i = continueFrom + 1; i < input1.size(); i++) {
		int tempDiff = input1[i] - input2[i];
		if(tempDiff != diff) {
			// tempDiff is different from diff
			if(input2[i] == 0 && input1[i] <= diff) {
				// continue going
			} else {
				// array b[i] = 0, AND array a[i] > diff
				cout << "no" << nL;
				return;
			}
		} 
	}

	cout << "yes" << nL;
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
		VI input1;
		VI input2;
		int x;

		for(int i = 0; i < n; i++) {
			cin >> x;
			input1.push_back(x);
		}

		for(int i = 0; i < n; i++) {
			cin >> x;
			input2.push_back(x);
		}

		solve(input1, input2);
	}	
}

