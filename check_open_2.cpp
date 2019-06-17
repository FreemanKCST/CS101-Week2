// This program tests for file open errors. Another way
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	int number;

	// Open the file.
	inputFile.open("BadListOfNumbers.txt");

	// If the file successfully opened, process it.
	if (inputFile.fail())
	{
		// Display an error message.
		cout << "Error opening the file.\n";
	}
	else
	{
		// Read the numbers from the file and
		// display them.
		while (inputFile >> number)
		{
			cout << number << endl;
		}

		// Close the file.
		inputFile.close();
	}
	return 0;
}


