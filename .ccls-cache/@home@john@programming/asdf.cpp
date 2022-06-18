#include <iostream>
#include <vector>
#include <string>
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

void solve(int a, int b, int c, int d) {
	int cnt = 0;
	if(b > a) {cnt++;} 
	if(c > a) {cnt++;}
	if(d > a) {cnt++;} 
	cout << cnt << nL;
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int a; int b; int c; int d;
		cin >> a >> b >> c >> d; 
		solve(a, b, c, d);	
	}	
}

