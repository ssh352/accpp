#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iomanip>
#include <ios>
#include "grade.h"
#include "Student_info.h"
#include "extract_fails.h"
#include <ctime>
 
using std::string;
using std::vector;
using std::list;
using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::streamsize;
 
 
// There are two functions here.
//   - The top one is used to test out extract_fails version 3 (vector<Student_info>).
//   - The bottom one is for testing out extract_fails version 4 (list<Student_info>).
 
// for testing extract_fails_v3 - that uses vector<Student_info>
int test_extract_fails_v3()
{
    vector<Student_info> students;
    Student_info record;
 
    // read and store all the student's data.
    while (read(cin, record))
        students.push_back(record);
 
    // Extract the failed students (use extract_fails_v3) and time-stamp it!
    clock_t startTime = clock();
    vector<Student_info> students_failed = extract_fails_v3(students);
    clock_t endTime = clock();
    clock_t clockTicksTaken = endTime - startTime;
    double timeInSeconds = clockTicksTaken / (double) CLOCKS_PER_SEC;
 
    streamsize prec = cout.precision();
    cout << "Elapsed (in seconds): " << setprecision(30) << timeInSeconds
         << setprecision(prec) << endl;
 
    return 0;
}
 
 
// for testing extract_fails_v4 - that uses list<Student_info>
int test_extract_fails_v4()
{
    list<Student_info> students;
    Student_info record;
 
    // read and store all the student's data.
    while (read(cin, record))
        students.push_back(record);
 
    // Extract the failed students and time-stamp it!
 
    clock_t startTime = clock();
    list<Student_info> students_failed = extract_fails_v4(students);
    clock_t endTime = clock();
    clock_t clockTicksTaken = endTime - startTime;
    double timeInSeconds = clockTicksTaken / (double) CLOCKS_PER_SEC;
 
    streamsize prec = cout.precision();
    cout << "Elapsed (in seconds): " << setprecision(30) << timeInSeconds
         << setprecision(prec) << endl;
 
    return 0;
}

// for testing extract_fails_v4 - that uses list<Student_info>
int test_typedef_extract_fails()
{
    Students_group students;
    Student_info record;
 
    // read and store all the student's data.
    while (read(cin, record))
        students.push_back(record);
 
    // Extract the failed students and time-stamp it!
 
    clock_t startTime = clock();
    Students_group students_failed = typedef_extract_fails(students);
    clock_t endTime = clock();
    clock_t clockTicksTaken = endTime - startTime;
    double timeInSeconds = clockTicksTaken / (double) CLOCKS_PER_SEC;
 
    streamsize prec = cout.precision();
    cout << "Elapsed (in seconds): " << setprecision(30) << timeInSeconds
         << setprecision(prec) << endl;
 
    return 0;
}