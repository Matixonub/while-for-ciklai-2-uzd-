#include <iomanip>
#include <iostream>
#include <cmath>

int suma, first, last;

using namespace std;
int main() {
	cout << "Iveskite intervalo pirma skaiciu: " << endl;
	cin >> first;
	cout << "Iveskite intervalo paskutinis skaiciu: " << endl;
	cin >> last;
	suma = 0;
	while (first <= last) {
		if (first % 2 == 1) {
			suma +=first;
			cout << first << " yra nelyginis." << endl;
		}
		first++;
	}
	cout << "Suma = " << suma << endl;
}