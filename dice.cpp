#include <bits/stdc++.h>
using namespace std;

int main() {
	int min_value, max_value;
	
	cout << "Enter the minimum value of the die: ";
	cin >> min_value;
	cout << "Enter the maximum value of the die: ";
	cin >> max_value;
	
	int range = max_value - min_value + 1;
	char another_roll;
	while (true) {
		cout << rand() % range + min_value << endl; // Random number between min_value and max_value inclusive
		cout << "\nDo you want to roll again? (Y/N)" << endl;
		cin >> another_roll;
		if (another_roll == 'Y' or another_roll == 'y')
			continue;
		else
			break;
	}
	return 0;
}