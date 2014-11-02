#include <iostream>
#include <string>
#include <vector>
#include <map>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector; using std::map;
using std::istream;

map<string, int> read_stream()
{
	int word_count = 0;
	// vector<string> m_vec;
	map<string, int> m_dict;
	string m_str;

	while(cin >> m_str)
	{
		// m_vec.push_back(m_str);

		if(m_dict.find(m_str) == m_dict.end())
		{
			// this word not exists in our dict yet
			m_dict[m_str] = 0;
		}
		else
		{
			// increment occurance
			m_dict[m_str] += 1;
		}
		++word_count;
	}

	cout << word_count << endl;
	return m_dict;
}

int main(int argc, char const *argv[])
{
	/* code */
	map<string, int> m_map;
	m_map = read_stream();
	
	map<string, int>::iterator iter;

	for(iter = m_map.begin(); iter != m_map.end(); ++iter)
	{
		cout << iter->first << ": " << iter->second << endl;
	}	
	return 0;
}
