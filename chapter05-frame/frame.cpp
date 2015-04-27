#include <string>      // string
#include <vector>      // vector
#include <algorithm>   // max
#include <iostream>
 
using std::string;
using std::vector;
using std::max;
using std::cout; using std::endl;
 
string::size_type width(const vector<string>& v)
{
    string::size_type maxlen = 0;
    for(vector<string>::size_type i = 0; i != v.size(); ++i)
        maxlen = max(maxlen, v[i].size());
    return maxlen;
}
 
vector<string> frame(const vector<string>& v)
{
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');
 
    // write the top border
    ret.push_back(border);
 
    // write each interior row, bordered by an asterisk and a space
    for (vector<string>::size_type i = 0; i != v.size(); ++i)
        ret.push_back("* " + v[i] + string(maxlen - v[i].size(), ' ') + " *");
 
    // write the bottom border
    ret.push_back(border);
 
    return ret;
}

// vector<string> center(const vector<string>& v, string& center, char symbol)
vector<string> center(const vector<string>& v, string& pos)
{
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');
 
    // write the top border
    ret.push_back(border);
 
    cout << "pos: " << pos << endl;
    if (pos == "left")
    {
        // write each interior row, bordered by an asterisk and a space
        for (vector<string>::size_type i = 0; i != v.size(); ++i)
            ret.push_back("* " + v[i] + string(maxlen - v[i].size(), ' ') + " *");
    }
    else if(pos == "right")
    {
        for (vector<string>::size_type i = 0; i != v.size(); ++i)
        {
            string fillings(maxlen - v[i].size(), ' ');
            ret.push_back("* " + fillings + v[i] + " *");        
        }
    }
    else if (pos == "center")
    {
        for (vector<string>::size_type i = 0; i != v.size(); ++i)
        {
            string fillings_l((maxlen - v[i].size()) / 2, ' ');
            string fillings_r(maxlen - v[i].size() - fillings_l.size(), ' ');
            ret.push_back("* " + fillings_l + v[i] + fillings_r + " *");
        }
    }

    // write the bottom border
    ret.push_back(border);
 
    return ret;
}