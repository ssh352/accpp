#ifndef GUARD_Student_info
#define GUARD_Student_info

// `Student_info.h' header file
#include <iostream>
#include <string>
#include <vector>
#include <list>

struct Student_info {
	std::string name;
	double midterm, final;
	std::vector<double> homework;
};

// question 5-3: need to pick one of the following. Using typedef to abstract
typedef std::list<Student_info> Students_group;
// typedef std::vector<Student_info> Students_group;

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);
#endif

