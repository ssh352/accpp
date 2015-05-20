#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include "pics.h"

using std::cout;
using std::copy;
using std::endl;
using std::ostream_iterator;
using std::string;
using std::vector;

int main()
{
	vector<string> p;
	p.push_back("this is an");
	p.push_back("example");
	p.push_back("to");
	p.push_back("illustrate");
	p.push_back("framing");

	ostream_iterator<string>ofile(cout, "\n");
	
	copy(p.begin(), p.end(), ofile);
	cout << endl;

	vector<string> f = frame(p);
	copy(f.begin(), f.end(), ofile);	cout << endl;

	vector<string> h = hcat(frame(p), p);
	copy(h.begin(), h.end(), ofile);
	cout << endl;

	// 6-1: implement frame and hcat using iterator
	vector<string> fi = frame_iter(p);
	copy(fi.begin(), fi.end(), ofile);	cout << endl;

	vector<string> hi = hcat_iter(frame(p), p);
	copy(hi.begin(), hi.end(), ofile);
	cout << endl;

	return 0;
}
