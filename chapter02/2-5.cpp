#include <iostream>
using std::cout; using std::cin;
using std::endl; using std::string;

void triangle(int layer)
{
	for (int i = 0; i != layer + 1; ++i)
	{
		string s(i, '*');
		cout << s << endl;
	}
	cout << endl;
}

void square(int length)
{
	string s(length, '*');

	for (int i = 0; i != length; ++i)
	{
		cout << s << endl;
	}
	cout << endl;
}

void rectagle(int length, int height)
{
	string s(length, '*');

	for (int i = 0; i != height; ++i)
	{
		cout << s << endl;
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	/* write square, rect & triangle*/
	triangle(atoi(argv[1]));
	square(atoi(argv[2]));
	rectagle(atoi(argv[3]), atoi(argv[4]));

	return 0;
}