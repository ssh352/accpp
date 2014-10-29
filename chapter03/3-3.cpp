#include <iostream>
#include <string>
#include <map>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::map;

int main()
{
	map<string, int> dict;

	string new_word;
	int x = 0;
	while(cin >> new_word)
	{
		if(dict.find(new_word) == dict.end())
		{
			cout << "is a new word" << endl;
			dict[new_word] = 1;
		}
		else
		{
			int occr = dict[new_word];
			dict[new_word] = occr + 1;
		}
	}

	map<string, int>::iterator iter;
	for(iter = dict.begin(); iter != dict.end(); ++iter)
	{
		cout << iter->first << ": " << iter->second << endl;
	}
}