#include "Student_info.h"
#include "grade.h"
#include <vector>
#include <list>
 
using std::vector;
using std::list;
using std::cout;
using std::endl;
 
// predicate to determine whether a student failed
// (S5.1/75)
bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
}
 
// separate passing and failing student records
// version 1: maintain two vectors (pass and fail) within local scope
// Can use up lots of memory resource.
// (S5.1/76)
vector<Student_info> extract_fails_v1(vector<Student_info>& students)
{
    vector<Student_info> pass, fail;
 
    for (vector<Student_info>::size_type i = 0;
         i != students.size(); ++i)
         if (fgrade(students[i]))
            fail.push_back(students[i]);
         else
            pass.push_back(students[i]);
 
    students = pass;
    return fail;
}
 
// separate passing and failing student records
// version 2: maintain one vector (fail) within local scope. Update pass vector by reference.
// correct but potentially slow. (Still use up lots of memory resource but less than version 1)
// (S5.1.1/77)
vector<Student_info> extract_fails_v2(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::size_type i = 0;
 
    // invariant: elements [0,i) of students represent passing grades
    while (i != students.size())
    {
        if (fgrade(students[i]))
        {
            fail.push_back(students[i]);
            students.erase(students.begin() + i);
        }
        else
            ++ i;
    }
    return fail;
}
 
// separate passing and failing student records
// version 3: iterators but no indexing; still potentially slow
// (S5.3/82)
vector<Student_info> extract_fails_v3(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::iterator iter = students.begin();
    while (iter != students.end())
    {
        if (fgrade(*iter))
        {
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else
            ++iter;
    }
    return fail;
}
 
// separate passing and failing student records
// version 4: use list instead of vector (essentially the same as version 3 otherwise)
// (S5.5/85)
list<Student_info> extract_fails_v4(list<Student_info>& students)
{
    list<Student_info> fail;
    list<Student_info>::iterator iter = students.begin();
    while (iter != students.end())
    {
        if (fgrade(*iter))
        {
            fail.push_back(*iter);
            std::cout << (*iter).name << std::endl;
            iter = students.erase(iter);
        }
        else
            ++iter;
    }
    return fail;
}

// 5-3: using typedef to generalize data structures
Students_group extract_fails_v5(Students_group& students)
{
    Students_group fail;
    Students_group::iterator iter = students.begin();

    while(iter != students.end())
    {
        if (fgrade(*iter))
        {
            fail.push_back(*iter);
            std::cout << (*iter).name << std::endl;
            iter = students.erase(iter);
        }
        else
            ++iter;
    }
    return fail;
}

/* 5-6: vector. copies records for passing students to the beginning of students,
then uses the resize function to remove the extra elements*/
vector<Student_info> extract_fails_v6(vector<Student_info>& students)
{
    typedef vector<Student_info>::size_type vec_size;
    vec_size passed_count = 0;
    // vector<Student_info>::iterator iter = students.begin();

    vec_size i = 0;
    while (i != students.size())
    {
        if (!fgrade(students[i]))
        {
            cout << students[i].name << " passed" << endl;
            students.insert(students.begin(), students[i]);
            // this ++i is important! otherwise, the loop will stuck at the first passed student
            ++i;
            ++passed_count;
        }
        ++i;
    }

    // resize vector to pass-only
    cout << "passed count: " << passed_count << endl;
    students.resize(passed_count);
    return students;
}