#include "circle.h"

void circle_perimeter(double r)
{
    /**
     * 
     * */
    double c, s;
    const double pi = 3.14159;
    c = 2.0 * pi * r;
    s = pi * r * r; 
    cout << "圆的周长为：" << c << endl;
    cout << "圆的面积为：" << s << endl;
}

