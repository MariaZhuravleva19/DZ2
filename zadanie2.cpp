#include<iostream>
using namespace std;

int main()
{
	int m, h;    
	cin >> h >> m;

	cout << fabs(((h % 12) * 30) - (m * 6)) << endl;

}
