// https://lmcodequestacademy.com/problem/hide-your-spies
// Problem 109
// 17JUN2022
#include <bits/stdc++.h>
using namespace std;

#define nL "\n"
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;
typedef vector<ll> Vll;

struct point {
	int x;
	int y;
};

struct wall {
	point start;
	point end;
};

struct equation {
	point domainMin;
	point domainMax;
	float slope;
};

void solve(point spy, point camera, wall[]) {
	float slopeSpyToCamera = (spy.y - camera.y) / (spy.x - camera.x);

	equation spyToCamera(
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;

	while(testcases--) {
		int x1, y1, x2, y2, nW;
		cin >> x1 >> y1 >> x2 >> y2 >> nW;
		point spy = {x1, y1};
		point camera = {x2, y2};
		wall walls[nW];
		for(int i = 0; i < nW; i++) {
			int startX, startY, endX, endY;
			cin >> startX >> startY >> endX >> endY;
			walls[i] = {{startX, startY}, {endX, endY}};
		}
		solve(spy, camera, walls);	
	}	
}

