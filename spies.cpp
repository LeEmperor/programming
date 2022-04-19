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
	int x;
	int y;
};

struct wall {
	point start;
	point end;
};

void solve(point spy, point camera, vector<wall> walls, int nWalls) {

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;
	int x, y, nWalls;
		
	while(testcases--) {
		cin >> x >> y;
		point spy = {x, y};

		cin >> x >> y;
		point camera = {x, y};

		cin >> nWalls;

		vector<wall> walls;

		while(nWalls--) {
			cin >> x >> y;
			point wallStart = {x, y};

			cin >> x >> y;
			point wallEnd = {x, y};

			wall bruh = {wallStart, wallEnd};
			walls.PB(bruh);
		}

		solve(spy, camera, walls, nWalls);
	}	
}
