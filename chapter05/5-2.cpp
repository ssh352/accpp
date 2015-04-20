#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <ctime>
#include "grade.h"
#include "../chapter04/Student_info.h"

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector; using std::list;
using std::ifstream;

vector<Student_info> extract_fails_v(vector<Student_info> &si)
{
	vector<Student_info> failed_student;
	vector<Student_info>::iterator iter = si.begin();
	while(iter != si.end())
	{
		if(fgrade(*iter))
		{
			// studentfailed_student 
			failed_student.push_back(*iter);
			iter = si.erase(iter);
		}
		else
		{
			++iter;
		}
	}
	return failed_student;
}

int main(int argc, char* argv[])
{
	for (int i = 0; i != argc; ++i)
	{
		cout << argv[i] << endl;
		// read text file into student info vector
		// string line;
		// ifstream m_file (argv[i]);
		// if (m_file.is_open())
		// {
		//     while ( getline (m_file,line)
		//     {
		//       cout << line << '\n';
		//     }
		//     myfile.close();
		// }
		// else
		// 	cout << "Unable to open file";
	}

	// vector<Student_info> students_v;
	// list<Student_info> students_l;
 //    Student_info record;
 
 //    // read and store all the student's data.
 //    while (cin >> record)
 //    {
 //        students_v.push_back(record);
 //        students_l.push_back(record);
 //    }

	// // extract fails from the vector
 //    high_resolution_clock::time_point t1 = high_resolution_clock::now();
 //    extract_fails_v(students_v);
 //    high_resolution_clock::time_point t2 = high_resolution_clock::now();

 //    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

 //    cout << duration;

	// extract fails from the list
	return 0;
}