#include "polygon.h"
#include "rectangle.h"
#include "triangle.h"
#include <iostream>
using namespace std;

int main(){
    rectangle rect;
    triangle tri;
    polygon * ppoly =  &rect;
    polygon * ppoly2 = &tri;
    ppoly->setValues (4,5);
    ppoly2->setValues (4,5);

    cout << rect.area() << '\n';
    cout << tri.area() << '\n';
    return 0;
}
