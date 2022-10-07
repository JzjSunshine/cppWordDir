#include "String.h"
String::String(const char* cstr /*= NULL*/) {
    if (cstr) {
        m_data = new char[strlen(cstr) + 1];
        strcpy(m_data, cstr);
    }
    else {
        m_data = new char[1];
        *m_data = '\0';
    }
}
String::String(const String& str) {
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
}
String& String::operator=(const String& str) {
    //检测是否自我赋值
    if (this == &str)
        return *this;
    delete [] m_data;
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
    return *this;
}
String::~String() {
    delete[] m_data;
}
ostream& operator<<(ostream& os, const String& str) {
    os << str.c_str();
    return os;
}
