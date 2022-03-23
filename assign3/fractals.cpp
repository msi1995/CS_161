/************************************************************************************
 *
 * Program: fractals.cpp
 * Author: Doug Lloyd
 * Date: 11/10/2019
 * Description: Accepts a positive odd integer for number of stars and a non-negative offset
 offset and prints a fractal pattern through recursive function calls
 *
 ************************************************************************************/


#include <iostream>
#include "helper_functions.h"

using namespace std;

void pattern(int, int);


int main() {
	int restart = 1, offset, numStars;

	while (restart == 1) {

		cout << "Enter number of stars" << endl;
		cin >> numStars;
		cout << "Enter desired offset" << endl;
		cin >> offset;

		pattern(numStars, offset);


		
		cout << "Make another fractal? 1 for yes, 0 for no" << endl;
		restart = get_int();

	}

	return 0;
}


void pattern(int n, int col) {

	if (n > 0) {

		pattern(n-2, col + n/2.5);

		// A loop to print n stars at col 'col'
		for (int i = 0; i < col; i++) 
			cout << " ";
		for (int i = 0; i < n; i++) 
			if (n == 1) {
				cout << " * ";
			}
			else
			cout << "* ";
			cout << endl;

		pattern(n-2, col + n/2.5);
	}
}


