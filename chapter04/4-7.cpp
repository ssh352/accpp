#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector;

double average(vector<double>& m_vec)
{
	double sum;
	vector<double>::iterator it;

	for(it = m_vec.begin(); it != m_vec.end(); ++it)
	{
		sum += *it;
		cout << *it << endl;
	}

	return sum/m_vec.size();
}

int main()
{
	cout << "bring those bad boyz in: ";

	vector<double> vec;
	double m_double;

	while(cin >> m_double)
	{
		vec.push_back(m_double);
	}

	if (vec.size() > 0)
	{
		cout << "average: " << average(vec) << endl;
	}

	return 0;
}