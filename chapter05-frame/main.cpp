#include <iostream>  // cin, cout, endl, getline
#include <vector>    // vector
#include <string>    // string
#include "frame.h"   // width, frame
#include "vcat.h"    // vcat
#include "hcat.h"    // hcat
#include "vcout.h"   // vcout
 
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::vector;
 
int main()
{
    string s;            // line
    vector<string> p;    // paragraph
 
    // read multiple lines to make a paragraph
    while (getline(cin, s))
        p.push_back(s);
 
    // have a play, manipulate and display paragraph (p) in multiple ways
 
    cout << "----------------------------------------------------\n"
            "Display: p                                          \n"
            "----------------------------------------------------\n";
    vcout(p);
 
    cout << "-----------------------------------------------------\n"
            "Display: frame(p)                                    \n"
            "-----------------------------------------------------\n";
    // vcout(frame(p));
    // frame(p, "left", '*');

    // 5-5, test the center function
    // string test_l("left");
    // string test_r("right");
    // string test_c("center");
    // vcout(center(p, test_l));
    // vcout(center(p, test_r));
    // vcout(center(p, test_c));

    // 5-7 test using empty string
    // std::vector<string> v;
    // vcout(frame(v));
    // cout << "-----------------------------------------------------\n"
    //         "Display: vcat(p, frame(p))                           \n"
    //         "-----------------------------------------------------\n";
    // // vcout(vcat(p,frame(p)));
 
    // cout << "-----------------------------------------------------\n"
    //         "Display: vcat(frame(p), p)                           \n"
    //         "-----------------------------------------------------\n";
    // // vcout(vcat(frame(p),p));
 
    cout << "-----------------------------------------------------\n"
            "Display: hcat(p, frame(p))                           \n"
            "-----------------------------------------------------\n";
 
    vcout(hcat(p,frame(p)));
 
    // cout << "-----------------------------------------------------\n"
    //         "Display: hcat(frame(p), p)                           \n"
    //         "-----------------------------------------------------\n";
    // // vcout(hcat(frame(p),p));
 
    // cout << "-----------------------------------------------------\n"
    //         "Display: vcat(hcat(frame(p), p), hcat(p, frame(p)))  \n"
    //         "-----------------------------------------------------\n";
    // vcout(vcat(hcat(frame(p), p), hcat(p, frame(p))));
 
    return 0;
}