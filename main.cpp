#include <iostream>
#include "NumberArray.h"
using namespace std;
 
int main() {
 
	int howMany;		//Number of elements in the array
	int count;			//Loop counter
	double value;		//Value to be stored in the array
 
	//Get the number of elements in the array from the user to store
	cout << "How many numbers do you want to store? ";
	cin >> howMany;
 
	//Create a NumberArray object with the specified size
	NumberArray numberArray(howMany);
 
	//Get the values from the user and store them in the array
	cout << "\nEnter the " << howMany << " numbers to store in the array:\n" << endl; 
	for (count = 0; count < howMany; count++) { 
 
		// Prompt the user to enter each number
		cout << "\tNumber " << (count + 1) << ": ";
		cin >> value;
 
		// Store the value in the array
		numberArray.setCell(count, value); 
	}
 
	//Display the average, highest, and lowest values in the array
	cout << "\nThe numbers you entered are: \n" << endl;
	for (count = 0; count < howMany; count++) {
 
		// Display each number in the array
		cout << "Number " << (count + 1) << ": " << numberArray.getCell(count) << endl;
	}
 
	//Display the average of the numbers
	cout << "\nThe average of the numbers is: " << numberArray.getAverage() << endl;
 
	//Display the highest number in the array
	cout << "The highest number is: " << numberArray.getHighest() << endl;
 
	//Display the lowest number in the array
	cout << "The lowest number is: " << numberArray.getLowest() << endl;
 
	return 0;
}
