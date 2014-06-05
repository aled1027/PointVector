/*
 *
 * This is an implemenation of points and vectors in 2-dimensions
 *
 * see documentation for help
 *
 */
#include <utility>
#include <iostream>
#include <math.h>

class Point; class Vector;


class Point {
    public:
        Point(float x, float y);
        Point(std::pair<float,float> _pPair);
        Point();
        ~Point();
                                           
        std::pair<float, float> getPair() const;
        Point operator+=(const Point rhs);
        void print() const;

    private:
        std::pair<float, float> pPair;
};

class Vector {
    public: 
        Vector(Point a, Point b);
        Vector();
        ~Vector();

        // get le state
        Point getStart() const;
        Point getEnd() const;
        float getMagnitude() const;
        Vector getAsIfStartIsOrigin() const;
        bool isStartOrigin() const;
        //scale (float c)
        void print() const;

        // add behavior to change the vector 
        //scale (float c)
        //setStart
        //setEnd
        //but most of this is done with the + and - functions


    private:
        // le state
        Point start;
        Point end;
};

Vector operator+(const Point lhs, const Point rhs);
Vector operator-(const Point lhs, const Point rhs);
Point operator+(const Point lhs, const Vector rhs);
bool operator==(const Point lhs, const Point rhs);

