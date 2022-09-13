#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#define nL "\n"

int main() {
	cout << setw(33) << "Number of Novels Authored" << endl;
	cout << setw(20) << left << "Author name" << 
		setw(23) << right << "Number of novels" << endl;

}
