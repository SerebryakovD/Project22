#include<iostream>

using namespace std;

int main() {
	srand(time(0));
	int arr[5][5];
	int num, minRange, maxRange, sum = 0;

	cout << "Enter min range: ";
	cin >> minRange;
	cout << "Enter max range: ";
	cin >> maxRange;
	cout << "Enter number for search: ";
	cin >> num;

	cout << endl << "Original array: " << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = rand() % (maxRange - minRange + 1) + minRange;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl << endl << "Masked array: " << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] < num) {
				cout << arr[i][j] << "\t";
				sum += arr[i][j];
			}
			else {
				cout << "*" << "\t";
			}
		}
		cout << endl;
	}

	cout << "sum: " << sum;

	return 0;
}
