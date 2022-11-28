#include<iostream>
#include<cmath>

using namespace std;

int main()
{

	double const t = 4.1;
	double y, x, k, p;

	cout << "Перший вираз" << endl;

    cout << "Введіть значення p: ";
	cin >> p;

	k = sqrt(p + pow(t, 2));
	cout << "Перший вираз k = " << k << endl;
	cout << " " << endl;

	cout << "Другий вираз" << endl;

	x = p + k;
	cout << "Другий вираз x = " << x << endl;
	cout << " " << endl;

	cout << "Третій вираз" << endl;

	y = pow(atan(pow(x, 2)), 3);

	cout << "Третій вираз y = " << y << endl;
	cout << " " << endl;
}