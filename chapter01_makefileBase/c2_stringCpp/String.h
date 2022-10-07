#ifndef _STRING_H_
#define _STRING_H_
#include <iostream>
using namespace std;
#include <string.h>
class String{
public:
    String(const char* cstr = NULL);
    String(const String& str);
    String& operator=(const String& str);
    ~String();
    char* c_str() const {
        return m_data;
    }
private:
    char* m_data;
};
ostream& operator<<(ostream& os, const String& str);
#endif // _STRING_H_
