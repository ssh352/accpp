#include <iostream>
#include <string>
#include "split.h"

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector;

vector<string> rotate_lines(vector<string>& original_lines)
{
	vector<string> new_vec;
	vector<string>::iterator iter;
	for(iter = original_lines.begin(); iter != original_lines.end(); ++iter)
	{
		cout << (*iter) << endl;
	}

	return new_vec;
}

int main()
{
	string line;
	vector<string> m_vec;
	while(getline(cin, line))
	{
		m_vec.push_back(line);
	}

	rotate_lines(m_vec);
	return 0;
}