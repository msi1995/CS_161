#include <iostream>

using namespace std;

int main() {

	int arr1[] = { 1, 2, 3, };
	int arr2[3];

	cout << arr1 << endl;
	cout << *arr1 << endl;

	for (int i = 0; i < 3; i++)
		cout << arr1[i] << endl;


	for (int i = 0; i < 3; i++) {
	arr2[i] = arr1[i];}

for (int i = 0; i < 3; i++)
	cout << arr2[i] << endl;

	return 0;
}