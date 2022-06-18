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
	double x;
	double y;
};

void solve(point plane, point a, point b, string name) {
	double plane_to_A = (a.y - plane.y) / (a.x - plane.x);
	double plane_to_B = (b.y - plane.y) / (b.x - plane.x);
	
	if ((isless(plane_to_A, -1.6)) || (isless(-.8, plane_to_A))) {
		cout << name << ", Abort Landing!\n";
	} else if ((isless(plane_to_B, -1.6)) || (isless(-.8, plane_to_B))) {
		cout << name << ", Abort Landing!\n";
	} else {
		cout << name << ", Clear To Land!\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases, approachCount;
	double x, y;
	char trash;
	string name;

	cin >> testcases;
	while(testcases--) {
		cin >> approachCount;
		while(approachCount--) {
			cin >> name >> x >> trash >> y;
			point plane = {x, y};

			cin >> x >> trash >> y;
			point a = {x, y};

			cin >> x >> trash >> y;
			point b = {x, y};
			
			solve(plane, a, b, name);
		}
	}
}
