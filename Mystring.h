#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Mystring {
private:
    char* data;
    size_t length;

public:
    Mystring();
    Mystring(const char* str);
    Mystring(const Mystring& other);
    Mystring(Mystring&& other) noexcept;
    Mystring& operator=(const Mystring& other);
    Mystring& operator=(Mystring&& other) noexcept;
    Mystring operator+(const Mystring& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Mystring& str);
    ~Mystring();
};
