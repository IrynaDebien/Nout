#include "Mystring.h"

// Default constructor
Mystring::Mystring() : data(nullptr), length(0) {}

// Parameterized constructor
Mystring::Mystring(const char* str) {
    length = strlen(str);
    data = new char[length + 1];
    strcpy_s(data, length + 1, str);
}

// Copy constructor
Mystring::Mystring(const Mystring& other) {
    length = other.length;
    data = new char[length + 1];
    strcpy_s(data, length + 1, other.data);
}

// Move constructor
Mystring::Mystring(Mystring&& other) noexcept : data(other.data), length(other.length) {
    other.data = nullptr;
    other.length = 0;
}

// Copy assignment operator
Mystring& Mystring::operator=(const Mystring& other) {
    if (this == &other) {
        return *this;
    }
    delete[] data;
    length = other.length;
    data = new char[length + 1];
    strcpy_s(data, length + 1, other.data);
    return *this;
}

// Move assignment operator
Mystring& Mystring::operator=(Mystring&& other) noexcept {
    if (this == &other) {
        return *this;
    }
    delete[] data;
    data = other.data;
    length = other.length;
    other.data = nullptr;
    other.length = 0;
    return *this;
}

// Concatenation operator
Mystring Mystring::operator+(const Mystring& other) const {
    size_t new_length = length + other.length;
    char* new_data = new char[new_length + 1];
    strcpy_s(new_data, length + 1, data);
    strcat_s(new_data, new_length + 1, other.data);
    Mystring new_string(new_data);
    delete[] new_data;
    return new_string;
}

// Output stream operator
ostream& operator<<(ostream& os, const Mystring& str) {
    if (str.data) {
        os << str.data;
    }
    else {
        os << "(empty)";
    }
    return os;
}

// Destructor
Mystring::~Mystring() {
    delete[] data;
}
