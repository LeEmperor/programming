#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

#define nL "\n"

void search(string n) {
	int l = n.length();
	int j = 0;
	int i = j + 1;
	vector<int> lpsArray(l, 0);
	lpsArray[0] = 0;
	int prev = 0;

	while(true) {

		if(i == l) {
			break;
		}

		if(n[i] == n[j]) {
			lpsArray[i] = j + 1;
			j++;
			i++;
		} else {
			if(lpsArray[i-1] == 1) {
				lpsArray[i] = 0;
				j = 0;
				i++;
			} else {
				if(j != 0) {
					j = lpsArray[j-1];
					lpsArray[i] = j;
				}
				i++;
			}
		}
	}
	
	for(int i : lpsArray) {
		cout << i << " ";
	}
	cout << nL;
}

void solve(string haystack, string needle) {

}

int main() {
	cout << __cplusplus << nL;


	int testcases;
	cin >> testcases;

	while(testcases--) {
		string line;
		cin >> line;
		search(line);
	}
}
