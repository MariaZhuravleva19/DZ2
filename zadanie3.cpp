#include<iostream>
using namespace std;

int main()
{
	int h, t, v, x;
	double tmin, tmax;
	
	cout << "h = " << endl;
	cin >> h;
	cout << "t = " << endl;
	cin >> t;
	cout << "v = " << endl;
	cin >> v;
	cout << "x = " << endl;
	cin >> x;

	tmax = t;
	tmin = (h - x * t) / (v - x);

	cout << tmin << " " << tmax << endl;

}
