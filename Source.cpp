#include <iostream>
#include <math.h>

using namespace std;

const double pi = 3.14159265;

int main()
{
	double a,b,c;
	double s, p;
	double gammaDegrees, gammaRad;

	a = 5;
	b = 10;
	gammaDegrees = 90;

	cout << "Podaj bok a: ";
	cin >> a;
	cout << endl << "Podaj bok b: ";
	cin >> b;
	cout <<endl<< "Podaj kat pomiedzy nimi";
	cin >> gammaDegrees;
	cout << endl;
	gammaRad = gammaDegrees*pi / 180;

	c = sqrt(a*a + b*b - 2 * a*b*cos(gammaRad));
	p = 0.5*(a + b + c);
	s = sqrt(p*(p - a)*(p - b)*(p - c));

	cout << "Trojkat o bokach:" << a<<" "<< b << " " << c << endl;
	cout << "ma pole" << s << endl;


	cout << "Program dziala";
	system("Pause");
	return 0;
}
