#include <iostream>
#include <vector>
#include <string>
#include "vcout.h"
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

    while(getline(cin, s))
        input_vector.push_back(s);

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

    return 0;
}