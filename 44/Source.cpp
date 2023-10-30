#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= 1)
			y = -x - 1;
		else
			if (x > -1 && x <= 1)
				y = 0;
			else
				if (x > 1 && x <= 1 + 2 * R)
					y = sqrt(R * R - (x - 1 - R) * (x - 1 - R));
				else y = (1 + 2 * R - x) / (6 - 2 * R);
		cout << "|" << setw(7) << setprecision(2) << x << " |" << setw(10) << setprecision(3) << y << " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
