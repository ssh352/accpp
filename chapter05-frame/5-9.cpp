#include <iostream>
#include <vector>
#include <string>
#include "vcout.h"
#include "split.h"
#include "caseSeperater.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::getline;

int main()
{
    vector<string> input_vector, low_vec, up_vec;
    string s;

    // 5-9: seperate lower and upper case from the input
/*
    while(getline(cin, s))
    {
        input_vector.push_back(s);
    }

    caseSeperater(input_vector, low_vec, up_vec);

    cout << "input:----------------------------------------------" << endl;    
    vcout(input_vector);
    cout << endl;

    cout << "lower cases:----------------------------------------------" << endl;
    vcout(low_vec);
    cout << endl;

    cout << "upper cases:----------------------------------------------" << endl;
    vcout(up_vec);
    cout << endl;
*/

    string in_str;
    while(getline(cin, in_str))
    {
        // using split function to sperate sentences to sigle words
        vector<string> splited_line = split(in_str);
        for (vector<string>::size_type i = 0; i < splited_line.size(); ++i)
        {
            input_vector.push_back(splited_line[i]);
        }
    }
/*
    // 5-10: palindrome words

    vector<string> palindrome_vec, non_palindrome_vec;
    string longest_pal = palindrome(input_vector, palindrome_vec, non_palindrome_vec);

    cout << "input:----------------------------------------------" << endl;
    vcout(input_vector);
    cout << endl;

    cout << "palindrome:----------------------------------------------" << endl;
    vcout(palindrome_vec);
    cout << "longest palindrome: " << longest_pal << endl;;
    cout << endl;

    cout << "non palindrome:----------------------------------------------" << endl;
    vcout(non_palindrome_vec);
*/
    // 5-11: find ascenders and descenders
    vector<string> ascender_vec, descender_vec, reg_vec;
    string longest_regular = ascenderDescender(input_vector, ascender_vec, descender_vec, reg_vec);
    cout << "input:----------------------------------------------" << endl;
    vcout(input_vector);
    cout << endl;

    cout << "ascenders:----------------------------------------------" << endl;
    vcout(ascender_vec);
    cout << endl;

    cout << "descenders:----------------------------------------------" << endl;
    vcout(descender_vec);
    cout << endl;

    cout << "regular:----------------------------------------------" << endl;
    vcout(reg_vec);
    cout << "longest regular word: " << longest_regular << endl;
    return 0;
}