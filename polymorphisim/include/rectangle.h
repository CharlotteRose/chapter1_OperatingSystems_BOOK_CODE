#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "polygon.h"


class rectangle: public polygon{
    public:
        int area();
        virtual ~rectangle();
    protected:
};

#endif // RECTANGLE_H
