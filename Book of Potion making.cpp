#include <iostream>
using namespace std;

int main(void) {

	int aValue;
	int digit;
	int sum = 0;
	cin >> aValue;

	for (int i = 10; i >= 0; --i) {
		digit = aValue % 10;
		aValue /= 10;
		sum += digit * i;
	}

	if (sum % 11 == 0) {
		cout << "Legal ISBN" << endl;
	}
	else {
		cout << "Illegal ISBN " << endl;
	}

	system("PAUSE");
	return 0;
}
