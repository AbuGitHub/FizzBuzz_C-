/*  Abuzar Noorali
Purpose/Description: This program plays a FizzBuzz game with the user
*/

#include <iostream>
using namespace std;

int main()
{
	int userInput;

	cout << "\t\t\t******* Welcome to FizzBuzz! ***********"
		<< "\nHOW TO PLAY: \nIf your number is evenly divisible by 3, you will get 'Fizz', \nif it is evenly divisible by 5, you will get 'Buzz'. \nIf your number is evenly divisible by both 3, and 5, you will get 'FizzBuzz'."
		<< "\n\n Enter a number: ";
	cin >> userInput;

	
		//Check fizzbuzz conditions
	if (userInput % 3 == 0 && userInput % 5 == 0)
	{
		cout << "\nFizzBuzz!";
	}
	else if (userInput % 3 == 0)
	{
		cout << "\nFizz!";
	}
	else if (userInput % 5 == 0)
	{
		cout << "\nBuzz!";
	}

	cout << "\n Thanks for playing!\n" << endl;
	return 0;
}
