#include <iostream>
#include <string>

class car {
	// parameters
	public:
		std::string brand;
		std::string model;
		int year;

	// methods
	public:
		// initialization constructor
		car(std::string x, std::string y, int z) {
			brand = x;
			model = y;
			year = z;
		}
};

int main() {

	std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
	car bruh1("BMW", "X5", 1999);
	car bruh2("Ford", "Pontiac", 2005);
	std::cout << "car1 brand is: " << bruh1.brand << "\n";
	return 0;

}
