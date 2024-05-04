#include <iostream>
using namespace std;

int main() {
	//Initialize the variables
	int firstValue;
	int secondValue;
	int thirdValue;

	//Take input from the user
	cout << "Enter first number here: ";
	cin >> firstValue;
	cout << "Enter second number here: ";
	cin >> secondValue;
	cout << "Enter third number here: ";
	cin >> thirdValue;

	//Pointers created to dynamically allocate memory
	int *ptr1 = new int(firstValue);
	int *ptr2 = new int(secondValue);
	int *ptr3 = new int(thirdValue);

	//Storing the values in the dynamic memory using pointers
	*ptr1 = firstValue;
	*ptr2 = secondValue;
	*ptr3 = thirdValue;

	//Displays the contents of the variables
	cout << "Contents of variables:\n";
	cout << "First Value: " << firstValue << endl;
	cout << "Second Value: " << secondValue << endl;
	cout << "Third Value: " << thirdValue << endl;

	//Displays the contents of the pointers
	cout << "Contents of pointers:\n";
	cout << "First Pointer: " << *ptr1 << endl;
	cout << "Second Pointer: " << *ptr2 << endl;
	cout << "Third Pointer: " << *ptr3 << endl;

	//Deallocating the dynamic memory
	delete ptr1;
	delete ptr2;
	delete ptr3;

	return 0;
}
