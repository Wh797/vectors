#include <pch.h>
#include <iostream>

using namespace std;

int main()
{
	int y, rows, columns;
	std::cout << "Enter the number of rows: ";
	std::cin >> rows;
	std::cout << "Enter the number of columns: ";
	std::cin >> columns;
	std::cout << "Enter a number Y: ";
	std::cin >> y;

//-----------------------Generating 2-D array---------------------------------------------------------
	int **array = new int*[2 * rows];                  
	for (int i = 0; i < rows; i++)
		array[i] = new int[columns];
//------------------------Generating bool--------------------------------------------------------------
	bool *arrx = new bool[columns];
//-----------------------Input Array Elements---------------------------------------------------------
	std::cout << "Enter the elements" << std::endl;
	for (int i = 0; i < columns; i++)               
		for (int j = 0; j < rows; j++)             
			std::cin >> array[i][j];
//--------------------Loop for the array output--------------------------------------------------------
	for (int i = 0; i < columns; i++) {            
		for (int j = 0; j < rows; j++) {
			std::cout << array[i][j] << " ";
		}
		std::cout << "\n";
	}
//-------------------Loop for finding columns with even numbers----------------------------------------
	for (int i = 0; i < columns; i++) {
		dup[i] = false;
		for (int j = 0; j < rows; j++) {            
			if (array[i][j] % 2 == 0) {                     
				dup[i] = true;
			}
		}
	}
	std::cout << "\n";
//--------------------Loop for addition of new columns infront of even numbers--------------------------
	for (int i = 0; i < columns; i++) {
		for (int j = 0; j < rows; j++) {
			std::cout << array[i][j] << " ";
		}
		std::cout << "\n";
		if (dup[i]) {
			for (int i = 0; i < rows; j++) {
				std::cout << array[i][j] << " ";
			}
			std::cout << "\n";
		}
	}

	return 0;
}