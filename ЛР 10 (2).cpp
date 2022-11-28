#include<iostream>
#include<cmath>

using namespace std;

int main()

{
    
	double hight, radius;
	double AB, BC, AC, p;
	int x1 = 0, x2 = 9, x3 = -9;
	int y1 = 0, y2 = 8, y3 = 10;
	
	AB = sqrt(((x2 * x2) - (2 * x2 * x1) + (x1 * x1)) + ((y2 * y2) - (2 * y2 * y1) + (y1 * y1)));
	cout << "AB = " << AB << endl;

	BC = sqrt(((x3 * x3) - (2 * x3 * x2) + (x2 * x2)) + ((y3 * y3) - (2 * y3 * y2) + (y2 * y2)));
	cout << "BC = " << BC << endl;

	AC = sqrt(((x3 * x3) - (2 * x3 * x1) + (x1 * x1)) + ((y3 * y3) - (2 * y3 * y1) + (y1 * y1)));
	cout << "AC = " << AC << endl;
	
	p = (AB+BC+AC)/2;
	
	hight = (2/AB)*sqrt(p*(p-AB)*(p-BC)*(p-AC));
	cout << "Висота = " << hight << endl;
	
	radius = sqrt(((p-AB)*(p-BC)*(p-AC))/p);
	cout << "Радіус вписаного кола = " << radius << endl;
	
}