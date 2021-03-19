/*
	Getting If Else conditional statement using c++
	Create a c++ code that ask the user to input five values of double data type.
		- Math
		- English
		- Science
		- PE
		- IT101
	
	Get the average of all values that was entered (name the result as averageGrade)
	Display the following statements based of the avarage.
		- 70 to 74 failed
		- 75 to 79 passed - poor
		- 80 to 84 passed - fair
		- 85 to 89 passed - average
		- 90 to 94 passed - Above average
		- 95 to 99 passed - excellent

	Display the average grade and the coresponding output (failed - excellent)

	Note: 
	By default lets say the user knows they can only enter 70 - 99 on the grade.
	Error handler will be discussed on another topic
*/

#include<iostream>
#include<cmath>
using namespace std;

/*
	Function: Main function
	Return type: Void (No values to be return)
*/
void main() {

	// Declaration of Variables
	double math, science, english, it101, pe, averageGrade;

	// User to input the contents of the variables
	cout << "Enter the grade for math: ";
	cin >> math;

	cout << "Enter the grade for science: ";
	cin >> science;
	
	cout << "Enter the grade for english: ";
	cin >> english;

	cout << "Enter the grade for it101: ";
	cin >> it101;

	cout << "Enter the grade for pe: ";
	cin >> pe;

	// calculate the average of all the subject
	averageGrade = round((math + science + english + it101 + pe) / 5);

	// display the average grade
	cout << "Your average grade is: " << averageGrade << endl;
	cout << "Result: ";

	if (averageGrade <= 74) {
		cout << "Failed";
	}
	else {
		cout << "passed - ";
		if ((averageGrade >= 75) && (averageGrade <= 79)) {
			cout << "Poor";
		}
		else if ((averageGrade >= 80) && (averageGrade <= 84)) {
			cout << "Fair";
		}
		else if ((averageGrade >= 85) && (averageGrade <= 89)) {
			cout << "average";
		}
		else if ((averageGrade >= 90) && (averageGrade <= 94)) {
			cout << "Above average";
		}
		else if ((averageGrade >= 96) && (averageGrade <= 99)) {
			cout << "excellent";
		}
	}
}