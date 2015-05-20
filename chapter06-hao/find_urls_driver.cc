#include <iostream>
#include <string>
#include "urls.h"
using namespace std;

int main()
{
    string t1("Have you tried http://google.co.uk and http://bbc.co.uk ?");
    string t2("Have you tried http:// or google.co.uk or http://google.co.uk ?");
    string t3("Have you tried http or :// or http://bbc.co.uk ?");

    ostream_iterator<string>ofile(cout, "\n");

    cout << string(20, '-') << endl;
    vector<string> p1 = find_urls(t1);
    copy(p1.begin(), p1.end(), ofile);

    cout << string(20, '-') << endl;
    vector<string> p2 = find_urls(t2);
    copy(p2.begin(), p2.end(), ofile);

    cout << string(20, '-') << endl;
    vector<string> p3 = find_urls(t3);
    copy(p3.begin(), p3.end(), ofile);
    return 0;
}