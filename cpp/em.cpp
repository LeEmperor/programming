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
#define all(x) x.begin(), x.end();

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef long int l;
typedef unsigned long int ui;
typedef long long int ll;
typedef unsigned long long int ull;

struct entry {
	string name;
	ll pn;
	string address;
	string edited;

	entry(string s, ll l, string a) {
		name = s;
		pn = l;
		address = a;
	}
};

void solve(vector<entry> oldDB, vector<entry> newDB) {
	vector<string> namesOLD;
	vector<string> namesNEW;
	vector<string> created;
	vector<string> deleted; 
	vector<string> chillin;
	vector<string> updated;

	for(entry e : oldDB) {
		namesOLD.PB(e.name);
	}

	for(entry e : newDB) {
		namesNEW.PB(e.name);
	}

	for(string name : namesNEW) {
		switch(count(namesOLD.begin(), namesOLD.end(), name)) {
			case 0:
				//  created
				created.PB(name);
				break;
			case 1:
				chillin.PB(name);
				break;
		}
	}

	for(string name : namesOLD) {
		switch(count(namesNEW.begin(), namesNEW.end(), name)) {
			case 0:
				//  deleted
				deleted.PB(name);
				break;
			case 1:
				// chillin
				break;
		}	
	}

	for(string s : deleted) {
		cout << s << " DELETED" << nL;
	}	

	for(string s : created) {
		cout << s << " CREATED" << nL;
	}

	// begin crsoss referencing for who is in both

	for(string s : chillin) {
		int atOld = 0;
		for(int i = 0; i < oldDB.size(); i++) {
			if(s == oldDB[i].name) {
				atOld = i;
				break;
			}
		}

		int atNew = 0;
		for(int i = 0; i < newDB.size(); i++) {
			if(s == newDB[i].name) {
				atNew = i;
				break;
			}
		}


		if(oldDB[atOld].pn != newDB[atNew].pn) {
			updated.PB(oldDB[atOld].name);
			cout << oldDB[atOld].name << " UPDATED PHONE NUMBER" << nL;
		}

		if(oldDB[atOld].address != newDB[atNew].address) {
			cout << oldDB[atOld].name << " UPDATED ADDRESS" << nL;
			updated.PB(oldDB[atOld].name);
		}
	}

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcases;
	cin >> testcases;
	string line;
	int o, n;

	while(testcases--) {
		vector<entry> oldDB;
		vector<entry> newDB;
		cin >> o >> n;
		cin.ignore(1);
		while(o--) {
			string name;
			getline(cin, name, ',');
			 
			ll pn;
			cin >> pn;
			cin.ignore(1);

			string address;
			getline(cin, address);
			
			entry thingy = {name, pn, address};
			oldDB.PB(thingy);
		}

		while(n--) {
			string name;
			getline(cin, name, ',');
			 
			ll pn;
			cin >> pn;
			cin.ignore(1);

			string address;
			getline(cin, address);

			entry thingy = {name, pn, address};
			newDB.PB(thingy);

		}

		solve(oldDB, newDB);

	}	
}

