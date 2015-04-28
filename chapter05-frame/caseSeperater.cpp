#include <iostream>
#include <string>    // string
#include <vector>    // vector
#include <cctype>

using std::cout;
using std::endl;
using std::string;
using std::vector;
 
void caseSeperater(const vector<string>& v, vector<string>& low, vector<string>& up)
{
    for (vector<string>::const_iterator iter = v.begin();
         iter != v.end(); ++iter)
    {
        bool has_up = false;

        for (string::size_type i=0; i < iter->size(); ++i)
        {
            if(!islower((*iter)[i]))
            {
                // cout << (*iter)[i] << endl;
                has_up = true;
            }
        }

        if (has_up)
            up.push_back(*iter);
        else
            low.push_back(*iter);
    }
}
