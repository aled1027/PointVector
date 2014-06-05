#include "point_vector.h"

//------------Point-----------------

Point::Point(float x, float y) {
    pPair = std::make_pair(x,y);
}
Point::Point(std::pair<float,float> _pPair) {
    pPair = _pPair;
}
Point::Point() {
    pPair = std::make_pair(0.0,0.0);
}
Point::~Point(){
}
std::pair<float, float> Point::getPair() const {
    return pPair;
}
Point Point::operator+=(const Point rhs) {
    std::pair<float,float> rhsPair = rhs.getPair();
    pPair.first += rhsPair.first;
    pPair.second += rhsPair.second;
    return *this;
}
void Point::print() const {
    std::cout << "(" << pPair.first << "," << pPair.second << ")";
}

//-------------Vector-----------------

Vector::Vector(Point a, Point b) {
    start = a; end = b;
}
Vector::Vector() {
    start = Point(0.0,0.0);
    end = Point(0.0,0.0);
}
Vector::~Vector() {
}
bool Vector::isStartOrigin() const {
    if (start == Point(0.0,0.0)) {
       return true;
    } else {
        return false;
    }
}
Point Vector::getStart() const {
    return start;
}
Point Vector::getEnd() const {
    return end;
}
float Vector::getMagnitude() const {
    auto sp = start.getPair();
    auto ep = end.getPair();
    return sqrt(pow(sp.first-ep.first ,2) + pow(sp.second-ep.second,2));
}
Vector Vector::getAsIfStartIsOrigin() const {
    //end = end - start;
    auto v = *this;
    v.start = Point(0.0,0.0);
    //end = end - start;
    return v;
}
void Vector::print() const {
    std::cout << "[";
    start.print();
    std::cout << ",";
    end.print();
    std::cout << "]";

}

//-----------------Inline Operators------------

Vector operator+(const Point lhs, const Point rhs) {
    return Vector(lhs,rhs);
}
Vector operator-(const Point lhs, const Point rhs) {
    return Vector(rhs,lhs);
}
Point operator+(const Point lhs, const Vector rhs) { 
    auto vect = rhs;
    if (!rhs.isStartOrigin()) {
        vect = rhs.getAsIfStartIsOrigin();
    }
    std::pair<float,float> lhsP = lhs.getPair();
    std::pair<float,float> vEnd = vect.getEnd().getPair();
    return Point(lhsP.first+=vEnd.first, lhsP.second+=vEnd.second);

}
bool operator==(Point const lhs, Point const rhs) {
    std::pair<float,float> lhsPair = lhs.getPair();
    std::pair<float,float> rhsPair = rhs.getPair();
    if (lhsPair.first == rhsPair.first && lhsPair.second == rhsPair.second) {
        return true;
    } else {
        return false;
    }
}































