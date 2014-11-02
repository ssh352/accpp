#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <math.h>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::setw; using std::setprecision;

int main(int argc, char const *argv[])
{
	double x = 0;
	int width = 9;
	cout << "input number of squares: ";
	cin >> x;

	for(int i=0; i!= int(x + 1); ++i)
	{
		if (i == 0)
		{
			cout << 0 << setw(width) << 0 << endl;
			continue;
		}
		int len = log10(i*i);
		cout << i << setw(len + width) << setprecision(len + 3) << double(i*i) << endl;
	}
	return 0;
}