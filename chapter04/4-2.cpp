#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <math.h>

using std::cout; using std::cin;
using std::endl; using std::string;

int main(int argc, char const *argv[])
{
	int x = 0;
	cout << "input number of squares: ";
	cin >> x;

	for(int i=0; i!=x; ++i)
	{
		cout << i << std::setw(log10(abs(i*i + 10)) * 3) << i*i << endl;
	}
	return 0;
}