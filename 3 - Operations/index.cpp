/*
	Basic Operational statements on C++
	Create a c++ code that ask the user to input three values of double data type.
	Get the following:
		- Sum of all three numbers (name the result as firstAnswer)
		- First Entry Minus the sum of seocond and third entry (name the result as secondAnswer)
		- Product of all three entry (name the result as thirdAnswer)
		- First Entry divided by the third entry (name the result as fourthAnswer)
		- Average of the three values that was entered (name the result as fifthAnswer)
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
	double firstAnswer, secondAnswer, thirdAnswer, fourthAnswer, fifthAnswer;

	// User to input the contents of the variables

	cout << "Enter value for first number: ";
	cin >> firstEntry;

	cout << "Enter value for second number: ";
	cin >> secondEntry;

	cout << "Enter value for third number: ";
	cin >> thirdEntry;

	// Computation of firstAnswer
	firstAnswer = firstEntry + secondEntry + thirdEntry;

	// Computation of secondAnswer
	secondAnswer = firstEntry - (secondEntry + thirdEntry);

	// Computation of thirdAnswer
	thirdAnswer = firstEntry * secondEntry * thirdEntry;

	// Computation of fourthAnswer
	fourthAnswer = firstEntry / thirdEntry;

	// Computation of fifthAnswer
	fifthAnswer = (firstEntry + secondEntry + thirdEntry) / 3;

	// Display all the answers
	cout << "firstAnswer is : " << firstAnswer << endl;
	cout << "secondAnswer is : " << secondAnswer << endl;
	cout << "thirdAnswer is : " << thirdAnswer << endl;
	cout << "fourthAnswer is : " << fourthAnswer << endl;
	cout << "fifthAnswer is : " << fifthAnswer << endl;
}