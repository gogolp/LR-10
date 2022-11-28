#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    
	double vuraz, x, y;

	cout << "Область визначень x: будь яке число!" << endl;
	cout << "Область визначень y: будь яке число окрім 0!" << endl;
	
	cout << "Введіть значення х: ";
	cin >> x;
    
    cout << "Введіть значення y: ";
	cin >> y;
    
	if (y != 0)
	{
		vuraz = sqrt(cos(x) - cos(y) * sin(pow((x-y)/(2*y), 2)));
		cout << "Значення виразу = " << vuraz << endl;
	}
	else
	{
		cout << "Ви ввели 0!" << endl;
		exit;
	}
}