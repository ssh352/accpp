#include <iostream>
#include <string>
#include <utility>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::pair;

int main()
{
	string x;
	int counter = 0;
	pair<string, size_t> min_len, max_len;

	while(cin >> x)
	{
		if(counter == 0)
		{
			// 1st time, set both min and max
			min_len = make_pair(x, x.size());
			max_len = make_pair(x, x.size());
		}
		else
		{
			// we check min and max
			if(x.size() < min_len.second)
			{
				min_len = make_pair(x, x.size());
			}

			if(x.size() > max_len.second)
			{
				max_len = make_pair(x, x.size());
			}
		}
		++counter;
	}

	cout << min_len.first << ": " << min_len.second << endl;
	cout << max_len.first << ": " << max_len.second << endl;

}