#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
    const string hello = "Hello";
    const string msg = hello + ", world" + "!";
    cout << msg << endl;

    const string exclam = "!";
    const string msg1 = string("Hello") + ", world" + exclam;
    cout << msg1 << endl;
    return 0;
}
