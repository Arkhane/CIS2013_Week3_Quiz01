#include <iostream>

using namespace std;

int main()
{
	double firstNumber;
	double secondNumber;
	double result;
	char op;
	bool keepRunning = true;
	char question = 'y';


	while (keepRunning)
	{
		cout << "Enter a first number: \n";
		cin >> firstNumber;

		cout << "Enter a second number: \n";
		cin >> secondNumber;

		cout << "Enter operator + or *: \n";
		cin >> op;

		if (op == '+')
		{
			result = firstNumber + secondNumber;
		}

		

		if (op == '*')
		{
			result = firstNumber * secondNumber;
		}

		

		cout << "Your result is: " << result;

		cout << "\nDo you want to calculate agian? (y/n): ";
		cin >> question;
		if (question != 'y')
		{
			keepRunning = false;
		}
	}


	return 0;
}