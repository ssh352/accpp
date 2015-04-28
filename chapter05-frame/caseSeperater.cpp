#include <iostream>
#include <string>    // string
#include <vector>    // vector
#include <cctype>
#include <algorithm>    // reverse
#include <boost/algorithm/string.hpp> // to_lower(), and shut up I know I'm lazy

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

void palindrome(const vector<string>& v, vector<string>& pal, vector<string>& non_pal)
{
    for (vector<string>::const_iterator iter = v.begin();
        iter != v.end(); ++iter)
    {
        string lower_str = (*iter);
        boost::algorithm::to_lower(lower_str);        

        string reversed = (*iter);
        boost::algorithm::to_lower(reversed);

        std::reverse(reversed.begin(), reversed.end());

        if (lower_str == reversed)
            pal.push_back(*iter);
        else
            non_pal.push_back(*iter);
    }
}
