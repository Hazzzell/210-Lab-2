#ifndef NUMBERARRAY_H_INCLUDED
#define NUMBERARRAY_H_INCLUDED
 
class NumberArray {
private:
	double* arrayPointer;
	int size;
 
public:
	//Constructor
	NumberArray(int);
 
	//Destructor
	~NumberArray();
 
	//Mutator
	void setCell(int, double);
 
	//Accessor
	double getCell(int);
 
	//getAverage function
	double getAverage();
 
	//getHighest function 
	double getHighest();
 
	//getLowest function 
	double getLowest();
};
 
#endif  //NUMBERARRAY_H_INCLUDED 
