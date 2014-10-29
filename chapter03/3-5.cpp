#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin;
using std::endl; using std::string;

int main(int argc, char const *argv[])
{
	cout << "Enter student name: ";

	std::vector<string> v_name;
	std::vector<double> v_score;
	string name;
	while(cin >> name)
	{
		v_name.push_back(name);
		cout << "Enter 5 homework scores below..." << endl;	
		int score_cnt = 0;
		double sum_score = 0.;
		double score;
		while( score_cnt < 5 && cin >> score)
		{
			sum_score += score;
			score = 0;
			++score_cnt;
		}
		v_score.push_back(sum_score / 5);
		cout << "Enter another student name or Ctrl+D to exit: ";
	}

	cout << endl;
	for(unsigned i = 0; i < v_name.size(); ++i)
	{
		cout << v_name[i] << endl;
		cout << v_score[i] << endl;
	}
	return 0;
}