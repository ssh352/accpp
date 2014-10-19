#include <iostream>

using std::cout; using std::cin; using std::endl;

int main(int argc, char const *argv[])
{
	double a = 0, b = 0;
	cout << "Please type in 2 numbers, seperate by space: ";
	cin >> a >> b;
	if(a < b)
	{
		cout << "b is bigger!" << endl;
	}
	else if (a == b)
	{
		cout << "they are equal" << endl;
	}
	else
	{
		cout << "a is bigger" << endl;
	}
	return 0;
}