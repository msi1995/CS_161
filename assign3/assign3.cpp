/************************************************************************************
 *
 * Program: fraction.cpp
 * Author: Doug Lloyd
 * Date: 11/10/2019
 * Description: Takes in two integers, a numerator and a denominator, finds the GCD
	of the two numbers, and divides the numerator and denominator by the GCD. This 
	finds the simplified version of the fraction, and then prints it to the user.
 *
 ************************************************************************************/





#include <iostream>
#include <cstdlib>
#include "helper_functions.h"


using namespace std;

int g_c_d(int, int);
bool to_lowest_terms(int&, int&);
int get_int();



int main() {

	int restart = 1, gcd, num1, num2;

	while (restart == 1) {
		cout << "Enter a numerator" << endl;
		num1 = get_int();
		cout << "Enter a denominator" << endl;
		num2 = get_int();

		if (to_lowest_terms(num1, num2) == true){

			cout << "Reduced form of the fraction is " << num1 << "/" << num2 << endl;

		}
		else {
			cout << "Can't reduce" << endl;
		}
	
		cout << "Enter new values? 1 for yes, 0 for no" << endl;
		restart = get_int();
	}

	return 0;

}


int g_c_d(int num1, int num2) {

	if (num2 == 0)
		return num1;

	return g_c_d(num2, num1 % num2);

}
	


bool to_lowest_terms(int& numerator, int& denominator) {
	int gcd;

	if (denominator == 0) {
		return false;
	}
	else {
		gcd = abs(g_c_d(numerator, denominator));
		cout << "Greatest common denominator is: " << gcd << endl;

		numerator = numerator / gcd;
		denominator = denominator / gcd;

		return true;
	}

}

int get_int() {

	string t;
	bool f;
	while (true) {
		f = true;
		cin >> t;

		for (int i = 0; i < t.length(); i++) {
			if (t[i] == 45) {
				if (i != 0 || t.length() == 1)
					f = false;
			}
			else if (t[i] < 48 || t[i] > 57) {
				f = false;
			}
		}

		if (f == true)
			return atoi(t.c_str());

		cout << "Not an int, please enter a valid int" << endl;

	}

}