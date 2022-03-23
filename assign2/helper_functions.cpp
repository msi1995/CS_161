#include <cmath>
#include "helper_functions.h"
#include <iostream>


bool check_range(int a,int b,int c){


	   	if (c >= a && c <= b){
			return true;
		}
		else{
		   	return false;
		}

}


bool is_capital(char x) {
	if (int(x) >= 65 && int(x) <= 90) {
		return true;
	}
	else {
		return false;
	}
}


bool is_even(int x) {
	if (x % 2 == 0) {
		return true;
	}
	else {
		return false;
	}

}


bool is_odd(int x) {
	if (x % 2 == 1) {
		return true;
	}
	else {
		return false;
	}
}


int equality_test(int num1, int num2) {
	if (num1 < num2) {
		return -1;
	}
	else if (num1 > num2) {
		return 1;
	}
	else if (num1 == num2) {
		return 0;
	}
}

bool float_is_equal(float num1, float num2, float precision) {
	if (abs(num1 - num2) <= precision) {
		return true;
	}
	else {
		return false;
	}

}


bool is_int(string str) {

	for (int i = 0; i < str.length(); i++) {
		if (str[i] < 48 || str[i] > 57) {
			return false;
		}
	}
	return true;
}

bool numbers_present(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 48 && str[i] <= 57) {
			return true;
		}
	}
	return false;
}



bool letters_present(string str) {
	for (int i = 0; i < str.length(); i++) {
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
			return true;
		}
	}
	return false;
}

bool contains_sub_string(string str1, string str2) {

	if (str2.length() > str1.length())
		return false;



	for (int i = 0; i < str1.length(); i++) {
		int z = i;
		int j = 0;
		if (str1[i] == str2[0]) {
			while (str1[z] == str2[j] && j < str2.length()) {
				z++;
				j++;
			}

			if (j == str2.length())
				return true;
			else
				i = z;
		}
	}

	return false;



}

int word_count(string str) {
	int spaces = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 32) {
			spaces++;
		}
	}
	return spaces + 1;
}


string to_upper(string str) {
	string newstr;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 97 && str[i] <= 122) {
			newstr += (str[i] - 32);
		}
		else {
			newstr += (str[i]);
		}
	}
	return newstr;
}

string to_lower(string str) {
	string newstr;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			newstr += (str[i] + 32);
		}
		else {
			newstr += (str[i]);
		}
	}
	return newstr;
}



string get_int(string userstring) {
	for (int i = 0; i < userstring.length(); i++) {
		if (userstring[i] < 48 || userstring[i] > 57) {
			cout << "This is not a number. Quitting" << endl;
			return "0";
		}


	}

	cout << "This is an integer! The integer is: " << userstring << endl;
	return userstring;

}
