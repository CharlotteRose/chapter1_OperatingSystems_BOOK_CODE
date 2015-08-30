#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "polygon.h"


class triangle:public polygon
{
    public:
        int area();
        virtual ~triangle();
    protected:
};

#endif // TRIANGLE_H
