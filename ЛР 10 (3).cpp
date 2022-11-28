#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    
	int a, b;
    double z1, z2, m;
    
    cout << "Введіть значення а:";
    cin >> a;

    cout << "Введіть значення b:";
    cin >> b;
    
    m = (a - b) / 2;

    z1 = pow(cos(a) - cos(b), 2) - pow(sin(a) - sin(b), 2);
    cout << "Значення першого виразу:" << z1 << endl;

    z2 = (-4) * sin(m)*sin(m) * cos(a + b);
    cout << "Значення другого виразу:" << z2 << endl;
    
}
