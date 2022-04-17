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

struct point {
	float x;
	float y;
};

void solve(point plane, point a, point b, string name) {
	float B = (b.y - plane.y) / (b.x - plane.x);
	float A = (a.y - plane.y) / (a.x - plane.x);

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases, n;
	float x, y;
	char trash;
	string name;

	cin >> testcases;
	while(testcases--) {
		cin >> n >> name >> x >> trash >> y;
		point plane = {x, y};

		cin >> x >> trash >> y;
		point a = {x, y};

		cin >> x >> trash >> y;
		point b = {x, y};

		solve(plane, a, b, name);
	}
}

