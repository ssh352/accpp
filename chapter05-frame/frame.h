#ifndef GUARD_FRAME_H
#define GUARD_FRAME_H
 
#include <string>
#include <vector>
 
std::string::size_type width(const std::vector<std::string>&);
std::vector<std::string> frame(const std::vector<std::string>&);
std::vector<std::string> center(const std::vector<std::string>&, std::string&);

#endif // GUARD_FRAME_H