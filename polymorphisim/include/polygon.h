#ifndef POLYGON_H
#define POLYGON_H


class polygon
{
    public:
        void setValues(int a, int b);
        virtual ~polygon();
    protected:
        int width, height;
};

#endif // POLYGON_H
