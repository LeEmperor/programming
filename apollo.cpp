#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <cstring>
#include <sstream>
using namespace std;
// consider defining std for only string, cout, and cin 

#define MP make_pair
#define PB push_back
#define exp 1e9
#define nL "\n"
#define sz(x) (int((x).size())) 

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef long int l;
typedef unsigned long int ui;
typedef long long int ll;
typedef unsigned long long int ull;

void solve(float x, float y, float z) {
	x -= 180; y -= 180; z -= 180;

	if (x < 0) {
		x += 360;
	}

	if (y < 0) {
		y += 360;
	}

	if (z < 0) {
		z += 360;
	}

	cout << x << " " << y << " " << z << nL;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	float x, y, z;
	cin >> testcases;

	while(testcases--) {
		cin >> x >> y >> z;
		solve(x, y, z);	
	}	
}

