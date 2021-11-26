#include <iostream>
#include <iomanip>

using namespace std; 

string getNthDigit(int); 

int main(int argc, char const *argv[]) {
	int input;
	bool flag = true; 

	while(flag) { 
		cout << "Please enter a whole number between 0-100" << endl;
		cin >> input;

		if(input < 0 || input > 100) {
			cout << "Invalid input, please try again." << endl << endl;
		}
		else {
			flag = false; 
		}
	}

	cout << getNthDigit(input) << endl;

	return 0;
}

//returns e with N number of decimals
string getNthDigit(int n) {
	string e = "2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274";

	return e.substr(0, n+2);
}