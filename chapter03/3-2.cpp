#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector;

int main()
{
	// ask for and read the student's name
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	vector<double> numbers;
	double x;

	while(cin >> x)
	{
		numbers.push_back(x);
		cout << x << ' ';
	}
	cout << endl;

	// check that the student entered some numbers grades
#ifdef _MSC_VER
	typedef std::vector<double>::size_type vec_sz;
#else
	typedef vector<double>::size_type vec_sz;
#endif

	vec_sz size = numbers.size();
	if (size == 0) {
		cout << endl << "You must enter numbers.  "
		                "Please try again." << endl;	
		return 1;
	}

	// sort the grades
	sort(numbers.begin(), numbers.end());

	// compute the median numbers grade
	vec_sz quart = size/4;
	double q1, q2, q3;

	if(size % 2 == 0)
	{
		q1 = (numbers[quart-1] + numbers[quart]) / 2;
		q2 = (numbers[quart*2-1] + numbers[quart*2]) / 2;
		q3 = (numbers[quart*3-1] + numbers[quart*3]) / 2;
	}
	else
	{
		q1 = numbers[quart];
		q2 = numbers[quart*2];
		q3 = numbers[quart*3];
	}

	cout << "q1: " << q1 << endl;
	cout << "q2: " << q2 << endl;
	cout << "q3: " << q3 << endl;


	return 0;
}