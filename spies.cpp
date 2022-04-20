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

struct wall {
	point start;
	point end;
};

struct equation {
	double m;
	double b;
};

point algebra(equation first, equation second) {

	double solutionX = (second.b - first.b) / (first.m - second.m);
	double solutionY = (solutionX * (first.m)) + (first.m);

	point solution = {solutionX, solutionY};

	return solution; 

}

void solve(point spy, point camera, vector<wall> walls, int nWalls) {

	double mSpyToCamera = (spy.y - camera.y) / (spy.x - camera.x);

	float b = spy.y - (mSpyToCamera * (spy.x));
	equation spyToCamera = {mSpyToCamera, b};

	for(wall wall : walls) {

		double slopeWall = (wall.end.y - wall.start.y) / (wall.end.x - wall.start.x);

		if (isless(mSpyToCamera, slopeWall) || isgreater(mSpyToCamera, slopeWall)) {

			cout << "they are not the same" << nL;

		} else {

			b = wall.start.y - (slopeWall * (wall.start.x));
			equation wallEq = {slopeWall, b};
			point overlap = algebra(spyToCamera, wallEq);
			
		}
	}
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	double x, y;
	int nWalls;
		
	cin >> testcases;

	while(testcases--) {

		vector<wall> walls;

		cin >> x >> y;
		point spy = {x, y};

		cin >> x >> y;
		point camera = {x, y};

		cin >> nWalls;

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
