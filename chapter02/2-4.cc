#include <iostream>
#include <string>

// say what standard-library names we use
using std::cin;         using std::endl;
using std::cout;        using std::string;


int main()
{
	// ask for the person's name
	cout << "Please enter your first name: ";

	// read the name
	string name;
	cin >> name;

	// build the message that we intend to write
	const string greeting = "Hello, " + name + "!";

	// the number of blanks surrounding the greeting
	int pad = 1;
	cout << "input pad #: " << endl;
	cin >> pad;

	int s_pad = 1;
	cout << "input horizontal pad:" << endl;
	cin >> s_pad;

	// the number of rows and columns to write
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + s_pad * 2 + 2;

	string frame_h (cols, '*');

	// write a blank line to separate the output from the input
	cout << endl;

	int ank_r = 0, ank_c = 0;

	// write `rows' rows of output
	// invariant: we have written `r' rows so far
	for (int r = 0; r < rows; ++r)
	{
		if(r==0 || r == rows - 1)
		{
			cout << frame_h;
		}
		else
		{
			string::size_type c = 0;

			while (c < cols)
			{
				if(c == 0 || c == cols -1)
				{
					cout << "*";
					++c;
				}
				else if(r == pad + 1 && c == s_pad + 1)
				{
					cout << greeting;
					c += greeting.size();
				}
				else
				{
					cout << " ";
					++c;
				}
			}
		}
		cout << endl;
	}
	return 0;
}

