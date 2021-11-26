#include <iostream>
#include <string>

using namespace std;

int fibonacci(int);

int main(int argc, char const *argv[])
{
	int input; 
	bool flag = true;


	while(flag){
		cout << "Please enter a number for the Nth Fibonacci sequence (between 1 and n)" << endl;
		cin >> input;
		if(input < 1){
			cout << "Inavlid input, please try again" << endl; 
		}
		else{
			flag = false; 
		}
	}


	cout << "The Nth number of the Fibonacci sequence is: " << fibonacci(input) << endl;

	return 0;
}

int fibonacci(int n){
	int temp;
	if(n == 1){
		return 0;
	}
	if(n == 2){
		return 1; 
	}

	return fibonacci(n-1) + fibonacci(n-2);
}