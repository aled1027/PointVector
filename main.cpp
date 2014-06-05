#include <iostream>
#include "point_vector.h"

using namespace std; 

int main(int argc, char *argv[]) {
    Point p0(0.0,0.0);
    Point p1(1.0,1.0);
    Point p2(2.0,2.0);
    // Vector v1(p0,p1);
    // Vector v2(p1,p2);

    auto x = p1.getPair();

    p1.print();
    cout << endl;
    p2.print();
    cout << endl;

    (p1+=p2).print();

    // v2.print();
    cout << endl;

    // auto v3 = v2.makeStartOrigin();
    // v3.print();
    cout << endl;


    // auto p4 = p1 + v2;
    // p4.print();
    cout << endl;

    // auto p5 = p1 - p2;
    // p5.print();


    cout << endl;
    cout << "exiting..." << endl;
    return 0;
}
