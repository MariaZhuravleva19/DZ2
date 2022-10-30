#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "ru");
	double a, R, s, otv;
	double pi = 3.141592653589793;

	cout << "Длина стороны: " << endl;
	cin >> a;
	cout << "Длина веревки: " << endl;
	cin >> R;
	

	if (R <= a / 2)
	{
		otv = R * R * pi;
	}
	else if (R > a * sqrt(2) / 2)
	{
		otv = a * a;
	}
	else
	{
		s = 2 * acos(a / 2. / R);
		otv = (pi * R * R) - (2 * R * R * (s - sin(s)));

	}
	cout << fixed << setprecision(3) << otv << endl;
}
