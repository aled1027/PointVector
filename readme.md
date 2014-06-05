### Point and Vector Objects ###
----

This is a simple implementation of a 2-dimensional point and vector for use in two dimensions. Each is implemented with <utility>'s pair, <code> std::pair<float, float> </code>. 

To use them you can do the following:

1. Create Point
    - <code>Point(float x, float y)            </code>
    - <code>Point() => creates a point as (0,0)</code>
    - <code>Point(pair<float,floar>)           </code>
2. Create vector
    - <code>Vector() => creates Vector with start at (0,0) and end at (0,0) </code>
    - <code>Vector(Point a, Point b) => a is start; b is end </code>
3. Manipulating
    - Let pt be a Point
    - let vect be a Vector
    - pt1 + pt2 :: pt -> pt -> vect     // where pt1 is start
    - pt1 - pt2 :: pt -> pt -> vect'    // where pt2 is start
    - pt1 + vect :: pt -> vect -> pt    // translates point by the vector
4. Extra, helpful functions:
    - all of these are to come
        - get state of object
            - get angle relative to x axis
            - get change in x from vector
            - get change in y
        - ways to alter the objects
            - scale vector by a constant
            - rotate vector -- change direction of vector by some angle
            - move vector to origin -- ie make start (0,0); move end accordingly
            - normalize the vector (ie make magnitude one, but maintain direction)


