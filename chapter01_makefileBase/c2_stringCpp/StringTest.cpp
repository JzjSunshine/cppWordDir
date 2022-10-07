#include "String.h"

int main() {
    String s1;
    String s2("hello");
    String s3(s1);  //拷贝构造函数
    cout << s3 << endl;
    s3 = s2;    //拷贝赋值函数
    cout << s3 << endl;
    return 0;
}
