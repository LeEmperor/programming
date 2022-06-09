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
	set<int> diffs;
	for(int i = 0; i < input1.size(); i++) {
		diff = input1[i] - input2[i];
		diffs.insert(diff);
	}

	if(diffs.size() > 1) {
		cout << "no" << nL;
	} else {
		cout << "yes\n";
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

