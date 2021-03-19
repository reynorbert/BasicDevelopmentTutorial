/*
	Basic Input Output on C++
	Create a c++ code that ask the user to input their First Name, Last Name, and Age then
	display all the variable you have entered at the end as an output
*/

#include<iostream>
#include<string>

using namespace std;

/*
	Function: Main function
	Return type: Void (No values to be return)
*/
void main() {

	// Declaration of Variables
	string firstName, lastName;
	int age;

	// Let the user know to input first name
	cout << "What is your first name: ";
	// Inserting value of first name
	cin >> firstName;

	// Let the user know to input last name
	cout << "What is your Last name: ";
	// Inserting value of last name
	cin >> lastName;

	// Let the user know to input age
	cout << "How old are you? ";
	// Inserting value of age
	cin >> age;

	// Displaying content of Variable
	cout << "Your name is "<< firstName << " " << lastName << " and you are " << age << " years old " << endl;
}