#include <cmath>
#include <iomanip>
#include <iostream>

double inesta, metai, profit;

using namespace std;
int main() {
	cout << "Iveskite norima suma inesimui: " << endl;
	cin >> inesta;
	cout << "Palukanu dydis per metus - 5%" << endl;
	cout << "Keleriems metams inesate pinigus?" << endl;
	cin >> metai;
	int i = 1;
	while (i <= metai ){
		inesta = inesta + inesta / 100 * 5;
		cout << "Po " << i << " metu gausite " << inesta << endl;
		i++;
	}

	return 0;
}