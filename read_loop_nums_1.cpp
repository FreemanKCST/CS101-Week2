// This program reads data from a file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	int number;

	// Open the file.
	inputFile.open("ListOfNumbers.txt");

	// Read the numbers from the file and
	// display them.
	while (inputFile >> number)
	{
	cout << number << endl;
	}
	
	/* >> operator not only reads data from a file, but also returns a true or false
	value indicating whether the data was successfully read or not */

	// Close the file.
	inputFile.close();
	return 0;
}
