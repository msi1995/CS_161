#include <string>

using namespace std;


/* the check_range function takes in three integers, 
and checks if int3 falls between the range defined 
by int1 and int2, inclusive. Returns boolean */
bool check_range(int,int,int);

/* the is_capital function takes in an integer, and
and checks if int3 falls between the range defined
by int1 and int2, inclusive. Returns boolean */
bool is_capital(char);

/* the is_even function takes in an integer, and
checks to see if the integer is even by using the %
function. Returns boolean */
bool is_even(int);

/* the is_odd function takes in an integer, and
checks to see if the integer is odd by using the %
function. Returns boolean */
bool is_odd(int);

/* the equality_test function takes in two integers, 
and compares equality, returning int -1, 0, or 1 depending
on equality of the values. Returns int.*/
int equality_test(int, int);

/* the float_is_equal function takes in three floats: 
the first two floats are the numbers being compared, 
and the third float is the max acceptable difference
between the two floats before they will not be considered
equal. Returns boolean.*/
bool float_is_equal(float, float, float);

/* the is_int function takes in a string and indicates
if the given string is an integer. Returns boolean. */
bool is_int(string);

/* The numbers_present function takes in a string and 
indicates if the string contains any numbers. Returns boolean*/
bool numbers_present(string);

/* The numbers_present function takes in a string and
indicates if the string contains any letters. Returns boolean*/
bool letters_present(string);

/* The contains_sub_string function takes in two strings
and checks to see if string2 is contained within string1.
For example, a parameter of (that,hat) would return true
since 'hat' is present inside the word 'that'. Returns boolean*/
bool contains_sub_string(string, string);

/* the word_count function takes in a string and returns
the number of words present in the string as an int.*/
int word_count(string);

/* the to_upper function takes in a string and converts
any lowercase letters to uppercase, leaving all other non-letter
inputs untouched. Returns string*/
string to_upper(string);

/* the to_lower function takes in a string and converts
any uppercase letters to lowercase, leaving all other non-letter
inputs untouched. Returns string*/
string to_lower(string);

/* The get_int function takes in a user input as a string and checks
if the input is an integer. Either returns integer if valid or informs
user that string entered was not numerical if invalid. Returns string
string get_int(string); */


/* The get_int function takes in a user input as a string and checks
if the input is an integer.Either returns integer if valid or informs
user that string entered was not numerical if invalid. Returns int */
int get_int();