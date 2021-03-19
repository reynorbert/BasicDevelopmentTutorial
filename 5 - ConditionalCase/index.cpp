/*
	Basic Case Statement on C++
	Create a c++ code that ask the user to input three values of double data type.

	Ask the user to enter the following to run the opperation

		1 - Sum of all three numbers (name the result as answer)
		2 - First Entry Minus the sum of seocond and third entry (name the result as answer)
		3 - Product of all three entry (name the result as answer)
		4 - First Entry divided by the third entry (name the result as answer)
		5 - Average of the three values that was entered (name the result as answer)
*/

#include<iostream>
using namespace std;

/*
	Function: Main function
	Return type: Void (No values to be return)
*/
void main() {

	// Declaration of Variables
	double firstEntry, secondEntry, thirdEntry;
	double answer;

	// User to input the contents of the variables

	cout << "Enter value for first number: ";
	cin >> firstEntry;

	cout << "Enter value for second number: ";
	cin >> secondEntry;

	cout << "Enter value for third number: ";
	cin >> thirdEntry;

	// ask the user what operation they want to use for 1 - 5, if entry is not in selection end the program
	char opperation;

	cout << "Please enter the opperation you have selected: ";
	cin >> opperation;
	switch (opperation)
	{
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
		switch (opperation)
		{
		case '1':
			// Computation of firstAnswer
			answer = firstEntry + secondEntry + thirdEntry;
			break;
		case '2':
			// Computation of secondAnswer
			answer = firstEntry - (secondEntry + thirdEntry);
			break;
		case '3':
			// Computation of thirdAnswer
			answer = firstEntry * secondEntry * thirdEntry;
			break;
		case '4':
			// Computation of fourthAnswer
			answer = firstEntry / thirdEntry;
			break;
		case '5':
			// Computation of fifthAnswer
			answer = (firstEntry + secondEntry + thirdEntry) / 3;
			break;
		}
		cout << "The answer is: " << answer << endl;
	break;
	default:
		cout << "You have not entered a correct value" << endl;
		break;
	}
}