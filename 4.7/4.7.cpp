#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double xp, xk, x, dx, a = 0, R = 0, S = 0, log_result = 0;
	int n = 1;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "log(1-x) = "; cin >> log_result;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "log(1-x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;


	x = xp;
	while (x <= xk)
	{
		n = 1;
		a = -1;
		S = a;

		do {
			n++;
			R = x / n;
			a *= R;
			S += a;

		} while (abs(a) >= log(1 - x));
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << exp(x) << " |"
			<< setw(10) << setprecision(5) << S << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}


