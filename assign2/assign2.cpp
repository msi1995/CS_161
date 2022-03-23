/************************************************************************************
 *
 * Program: assign2.cpp
 * Author: Doug Lloyd 
 * Date: 10/25/2019
 * Description: Collection of functions that print with hard-coded parameters. Functions included are:
				check_range, is_capital, is_even, is_odd, equality_test, float_is_equal, is_int,
				numbers_present, letters_present, contains_sub_string, word_count, to_upper, to_lower,
				and get_int. get_int is the only function that takes user input.
 *
 ************************************************************************************/



#include <iostream>
#include <cmath>
#include <time.h> 
#include "helper_functions.h"
#include <string>

using namespace std;


int main() {

   int numresult;   
   bool result;
   string stringresult;
   string userstring;


   result  = check_range(7,17,12);
   cout << "Checking if 12 falls in range 7-17. Expected (1, true): " << result  << endl;
   result = check_range(7,17,5);
   cout << "Checking if 5 falls in range 7-17. Expected (0, false): "<< result  << endl;

   cout << endl;

   result = is_capital('c');
   cout << "Checking if 'c' is capital. Expected (0, false): " <<  result << endl;
   result = is_capital('F');
   cout << "Checking if 'F' is capital. Expected (1, true): " << result << endl;

   cout << endl;

   result = is_even(2);
   cout << "Checking if 2 is an even number. Expected (1, True): " << result << endl;
   result = is_even(3);
   cout << "Checking if 3 is an even number. Expected (0, False): " << result << endl;

   cout << endl;

   result = is_odd(2);
   cout << "Checking if 2 is an odd number. Expected (0, False): " << result << endl;
   result = is_odd(3);
   cout << "Checking if 3 is an odd number. Expected (1, True): " << result << endl;

   cout << endl;

   numresult = equality_test(5,8);
   cout << "Checking equality of 5 and 8. Expected (-1, num1 < num2) " <<  numresult << endl;

   numresult = equality_test(5,5);
   cout << "Checking equality of 5 and 5. Expected (0, num1 == num2) "  << numresult << endl;

   numresult = equality_test(8,5);
   cout << "Checking equality of 8 and 5. Expected (1, num1 > num2) " << numresult << endl;

   cout << endl;

   result = float_is_equal(5.0,5.11,0.1);
   cout << "Checking equality of 5.0 and 5.11 with precision 0.1. Expected (0, False): " << result << endl;
   result = float_is_equal(5.0,5.1,0.1);
   cout << "Checking equality of 5.0 and 5.1 with precision 0.1. Expected (1, True): " <<  result << endl;

   cout << endl;


   result = is_int("test1");
   cout << "Checking if string 'test1' is int. Expected (0, False): " << result << endl;


   result = is_int("5755");
   cout << "Checking if string '5755' is int. Expected (1, True): " << result << endl;

   cout << endl;

   result = numbers_present("DOG");
   cout << "Checking if string 'DOG' contains int. Expected (0, False): " << result << endl;
   result = numbers_present("DOG1");
   cout << "Checking if string 'DOG1' contains int. Expected (1, True): " << result << endl;

   cout << endl;

   result = letters_present("123");
   cout << "Checking if string '123' contains letters. Expected (0, False): " << result << endl;
   result = letters_present("123F");
   cout << "Checking if string '123F' contains letters. Expected (1, True): " << result << endl;

   cout << endl;

   result = contains_sub_string("test","testing");
   cout << "Checking if string 'test' contains substring 'testing'. Expected (0, False): " << result << endl;
   result = contains_sub_string("nik","ni");
   cout << "Checking if string 'nik' contains substring 'ni'. Expected (1, True): " << result << endl;

   cout << endl;

   numresult = word_count("test string one two");
   cout << "Counting words in string 'test string one two'. Expected (4): " << numresult << endl;
   numresult = word_count("test string");
   cout << "Counting words in string 'test string'. Expected (2): " << numresult << endl;

   cout << endl;

   stringresult = to_upper("test string");
   cout << "Converting string 'test string' to uppercase. Expected (TEST STRING): " << stringresult << endl;
   stringresult = to_upper("test 123 string");
   cout << "Converting string 'test 123 string' to uppercase. Expected (TEST 123 STRING 123): " << stringresult << endl;

   cout << endl;

   stringresult = to_lower("TEST STRING");
   cout << "Converting string 'TEST STRING' to lowercase. Expected (test string): " << stringresult << endl;
   stringresult = to_lower("TEST 123 STRING");
   cout << "Converting string 'TEST 123 STRING' to lowercase. Expected (test 123 string): " << stringresult << endl;

   cout << endl;


   cout << "Please enter a string to run the get_int function, which will check if the string is an integer and return the integer if valid." << endl; 

   cin >> userstring;

   get_int(userstring);


   return 0;

}


