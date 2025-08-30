#include <iostream>
#include "NumberArray.h"
using namespace std;
//Constructor
 
NumberArray::NumberArray(int size) {
	this->size = size;
	arrayPointer = nullptr;				// Initialize pointer to nullptr
	arrayPointer = new double[size];	// Dynamically allocate memory for the array
}
 
//Destructor
NumberArray::~NumberArray() {
 
	// Destructor to deallocate memory used by the array
	if (arrayPointer != nullptr) {
		delete[] arrayPointer; // Deallocate the memory used by the array
		arrayPointer = nullptr; // Set pointer to nullptr to avoid dangling pointer
	}
}
 
//setCell function
void NumberArray::setCell(int index, double value) {
 
	if (index >= 0 && index < size) { // Check if index is within bounds
		arrayPointer[index] = value; // Set the value at the specified index
	} 
	else {
		cout << "Invalid Cell Number." << endl; // Error message for invalid index
		exit(EXIT_FAILURE); // Exit the program with an error code
	}
}
 
//getCell function
double NumberArray::getCell(int index) {
	if (index < 0 || index >= size) { // Check if index is within bounds
		cout << "Invalid Cell Number." << endl; // Error message for invalid index
		exit(EXIT_FAILURE); // Exit the program with an error code
	} 
	else {
		return arrayPointer[index]; // Return the value at the specified index
	}
}
 
//getAverage function
double NumberArray::getAverage() {
 
	double sum = 0.0; // Initialize sum to zero
	for (int i = 0; i < size; i++) { // Loop through the array
		sum += arrayPointer[i]; // Add each element to the sum
	}
	return sum / size; // Return the average
}
 
//getHighest function	
double NumberArray::getHighest() {
 
	double highest = arrayPointer[0]; // Initialize highest to the first element
	for (int i = 1; i < size; i++) { // Loop through the array starting from the second element
		if (arrayPointer[i] > highest) { // If current element is greater than highest
			highest = arrayPointer[i]; // Update highest
		}
	}
	return highest; // Return the highest value found
} 
 
//getLowest function
double NumberArray::getLowest() {
	double lowest = arrayPointer[0]; // Initialize lowest to the first element
	for (int i = 1; i < size; i++) { // Loop through the array starting from the second element
		if (arrayPointer[i] < lowest) { // If current element is less than lowest
			lowest = arrayPointer[i]; // Update lowest
		}
	}
	return lowest; // Return the lowest value found
}