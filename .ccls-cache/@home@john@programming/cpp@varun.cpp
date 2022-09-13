#include <iostream>
#include <vector>
#include <string>
#include <bitset> 
#include <cmath> 
#include <algorithm> 
#include <regex>
#include <iomanip>
using namespace std;

#define nL "\n"
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;
typedef vector<ll> Vll;

void printShit(vector<string> strings, vector<int> ints) {
	cout << setw(33) << "Number of Novels Authored" << nL;
	

}

int main() {

	string dataTitle;
	string column1Header;
	string column2Header;

	cout <<  "Enter a title for the data:" << nL;
	getline(cin, dataTitle);
	cout << "You entered: " << dataTitle << nL << nL << "Enter the column 1 header: " << nL;
	getline(cin, column1Header);
	cout << "You entered: " << column1Header << nL << nL << "Enter the column 2 header: ";
	getline(cin, column2Header);
	cout << "You entered: " << column2Header << nL;


	bool bruh = false;
	vector<string> dataStrings;
	vector<int> dataIntegers;
	while(bruh == false) {
		string data;
		cout << "Enter a data point (-1 to stop input):" << nL;	
		getline(cin, data);

		if(data == "-1") {
			cout << "stopped" << nL;
			break;
		}

		int bruh1 = 0;
		int firstComma;
		bool shidd = false;

		for(int i = 0; i < data.length(); i++) {
			if(data[i] == ',') {
				bruh1++;
				if(shidd == false) {
					shidd = true;
					firstComma = i;
				}
			}
		}

		if(bruh1 > 1) {
			cout << "too many commas" << nL;
			continue;
		} else if(bruh < 1) {
			cout << "too few commas" << nL;
			continue;
		} else {

			// has a single commas

			int bruh2 = true;
			for(char c : data.substr(firstComma + 2)) {
				if(isdigit(c - '0')) {
				} else {bruh2 = false;}
			}

			if (bruh2 == true) {
				string dataString = data.substr(0, firstComma);
				int dataInteger = stoi(data.substr(firstComma + 2));

				dataStrings.push_back(dataString);
				dataIntegers.push_back(dataInteger);
			}

		}

	}

	printShit(dataStrings, dataIntegers);	
}

