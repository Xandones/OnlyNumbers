#include <iostream>

int main()
{
	int num = 0;

	std::cout << "Type a number to calculate the multiplication table of the respective number: ";
	std::cin >> num;

	// The if statement validates the input: it must be integer numbers!
	if (std::cin.fail()) {
		std::cin.clear(); // The input will be cleared. 
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Wrong entry, please type only integer numbers.\n";
	}
	else { // If the input is ok, the multiplication table of the number until 20 will be shown.
		for (int mult = 1; mult <= 20; mult++)
		{
			std::cout << num << " X "  << mult<< " = " << num * mult << "\n";
		}
	}
	

	system("PAUSE");
}