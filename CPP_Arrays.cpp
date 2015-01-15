/*
 *
 *
 */


#include <iostream>
using namespace std;

int main(){

	int values[10];			// create an array size 10

	cout << values[0] << " is an array index that is not initialized yet, notice the garbage from memory" << endl;

	for(int i = 0; i < 10; ++i){
		values[i] = 2*i;
	}

	for(int i = 0; i < 10; ++i){
		cout << values[i] << endl;

	}


	double numbers[4] = { 4.5 , 2.3, 1.2, 5.3 };

	cout << "numbers " << numbers[2] << endl;


	int allZero[10] = {}; 	// using empty curly braces we initialize array to all zeros

	int values3[] = { 1, 2, 3, 4}; // auto initialize size of array by passing a set of values


	cout << sizeof(values3) << endl; // 16 bytes because of 4 ints at 4 bytes each
									// number of indices = sizeof(values) / sizeof(int)


	// MULTIDimensional-ARRAYS
	string animals[2][3] = { // 2 rows and 3 columns
			{"fox", "dog", "cat"},
			{"mouse", "squirrel", "parrot"}
	};


	for(int i = 0; i < 2; ++i){
		for(int j = 0; j < 3; ++j){
			cout << animals[i][j] << " "<<flush;
		}
		cout << endl;
	}


	cout << "string size " << sizeof(string) << " bytes " << endl;

	cout << "animals " << sizeof(animals) << endl;

	for(unsigned int i = 0; i < sizeof(animals)/ sizeof(animals[0]) ; i++){
		for(unsigned int j = 0; j < sizeof(animals[0]) / sizeof(string); j++){
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}




	//Switch Statement

	int value5 = 5;			// can use char or int or long

	switch(value5){

	case 5:
		cout << "value is 5 " << endl;
		break;
	case 6:
		cout << "value is 6" << endl;
		break;
	default:
		cout << "unrecognized" << endl;
	}


	/***********************************************/
//	string chek = "checking";
//
//	switch(chek){					// will not work with string types
//	case "chek":
//		cout << "it doesnt work" << endl;
//		break;
//	}

	/**********************************************/



	return 0;
}
