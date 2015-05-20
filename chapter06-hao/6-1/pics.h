#ifndef GUARD_pics_h
#define GUARD_pics_h

#include <string>
#include <vector>

std::string::size_type width(const std::vector<std::string>& v);

std::vector<std::string> frame(const std::vector<std::string>& v);

// frame 6-1: using iterator
std::vector<std::string> frame_iter(const std::vector<std::string>& v);

std::vector<std::string> vcat(const std::vector<std::string>& top,
                              const std::vector<std::string>& bottom);

std::vector<std::string> hcat(const std::vector<std::string>& left,
                              const std::vector<std::string>& right);

// hcat 6-1: using iterator
std::vector<std::string> hcat_iter(const std::vector<std::string>& left,
                              const std::vector<std::string>& right);
#endif
