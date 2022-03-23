#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>



using namespace std;

char* purge_string(char* str);
char* purge_string_spaces_intact(char* str);
bool is_palindrome(char* str);
void to_lower(char* str);



int countDistinct(string arr[], int n)
{
	int res = 1;

	// Pick all elements one by one 
	for (int i = 1; i < n; i++) {
		int j = 0;
		for (j = 0; j < i; j++)
			if (arr[i] == arr[j])
				break;

		// If not printed earlier, then print it 
		if (i == j)
			res++;
	}
	return res;
}

int main() {
	bool result;
	int restart = 1;
	string dummy;
	int userchoice;

	while (restart == 1){
		char arr[1025];
		char* arr1 = arr;

		cout << "Enter a string up to 1024 characters: ";
		cin.getline(arr, 1024);

		cout << endl << "press 1 for palindrome detector." << endl << "press 2 for word frequency count." << endl << "press 3 to return frequency of specific words of your choosing." << endl << endl;
		cin >> userchoice;
	

		if (userchoice == 1) {
			arr1 = purge_string(arr1);
			to_lower(arr1);
			result = is_palindrome(arr1);
			cout << endl << "(0 = not palindrome, 1 = palindrome)" << endl << "RESULT: " << result << endl << endl;
			delete[] arr1;
		}

		else if (userchoice == 2) {
			arr1 = purge_string_spaces_intact(arr1);
			to_lower(arr1);
			string words[256];
			int count = 0;
			string temp;
			int num[256] = { 0 };

			for (int i = 0; i < strlen(arr1); i++) {
				if (arr1[i] >= 'a' && arr1[i] <= 'z')
					words[count] += arr1[i];
				else if (arr1[i] == ' ' && arr1[i - 1] != ' ')
					count++;
			}
			count++;

			for (int j = 0; j < count; j++) {
				temp = words[j];
				for (int i = 0; i < count; i++)
					if (temp == words[i])
						num[j]++;
			}

			for (int i = 0; i < count; i++)
				cout << "The frequency of '" << words[i] << "' is: " << num[i] << endl;

			delete[] arr1;

		}

		else if (userchoice == 3) {
			int numWords = 0;
			int count = 0;
			string holder;
			string temp;
			string words[256];
			arr1 = purge_string_spaces_intact(arr1);
			to_lower(arr1);

			getline(cin, dummy);
			cout << "Enter words you want to search for: ";
			getline(cin, holder);

			for (int i = 0; i < strlen(arr1); i++) {
				if (arr1[i] >= 'a' && arr1[i] <= 'z')
					words[count] += arr1[i];
				else if (arr1[i] == ' ' && arr1[i - 1] != ' ')
					count++;
			}
			count++;

			for (int i = 0; i < holder.length(); i++) {
				if (holder[i] == ' ' && holder[i - 1] != ' ')
					numWords++;
			}

			numWords++;

			string* dyn_array = new string[numWords];
			int* freq = new int[numWords];
			count = 0;
			for (int i = 0; i < numWords; i++)
				freq[i] = 0;

			for (int i = 0; i < holder.length(); i++) {
				if (holder[i] >= 'a' && holder[i] <= 'z')
					dyn_array[count] += holder[i];
				else if (holder[i] == ' ' && holder[i - 1] != ' ')
					count++;
			}

			for (int i = 0; i < numWords; i++) {
				cout << dyn_array[i] << endl;
			}


			for (int j = 0; j < numWords; j++) {
				temp = dyn_array[j];
				for (int i = 0; i < numWords + 1; i++)
					if (temp == words[i])
						freq[j]++;
			}

			for (int i = 0; i < numWords; i++)
				cout << "The frequency of '" << dyn_array[i] << "' is: " << freq[i] << endl;


		}

		

		
	}



	/*else {
		cout << "Not a valid choice. Quitting" << endl;
	}*/

	cout << "Run again? 1 yes, 0 no. ";
	cin >> restart;
	getline(cin, dummy);
	

	return 0;
}


char* purge_string(char* str) {
	char userstring[1025];
	int count = 0;

	for (int i = 0; i < strlen(str); i++){
		if ((str[i] > 47 && str[i] < 58) || (str[i] >64 && str[i] < 91) || (str[i]>96 && str[i] < 123)) {
			userstring[count] = str[i];
			count++;
		}
	}	
	
	char* p = new char[count + 1];
	for (int i = 0; i < count; i++) {
		p[i] = userstring[i];
	}

	return p;
}

char* purge_string_spaces_intact(char* str) {
	char userstring[1025];
	int count = 0;

	for (int i = 0; i < strlen(str); i++) {
		if ((str[i] == 32) || (str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)) {
			userstring[count] = str[i];
			count++;
		}
	}

	char* p = new char[count + 1];
	for (int i = 0; i < count; i++) {
		p[i] = userstring[i];
	}

	return p;
}


bool is_palindrome(char* str) {
	int stop = 0;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != str[strlen(str) - i - 1]) {
			stop = 1;
			break;
		}
		
	}
	if (stop == 1) {
		return false;
	}
	else return true;
}

void to_lower(char* str) {

		for (int i = 0; i < strlen(str); i++) {
			if (str[i] >= 65 && str[i] <= 90) 
				str[i] = (str[i] + 32);
		}

}

