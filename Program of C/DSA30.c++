//  Implement a C++ program for vector addition using operator overloading. Define
// a class for vectors and overload the + operator to perform vector addition.
#include <iostream>

class Vector
{
private:
    double x, y;

public:
    Vector(double x = 0, double y = 0) : x(x), y(y) {}

    double getX() const
    {
        return x;
    }

    double getY() const
    {
        return y;
    }

    Vector operator+(const Vector &v) const
    {
        return Vector(x + v.getX(), y + v.getY());
    }
};

int main()
{
    Vector v1(3, 4);
    Vector v2(1, 2);

    Vector v3 = v1 + v2;

    std::cout << "Vector v1 = (" << v1.getX() << ", " << v1.getY() << ")" << std::endl;
    std::cout << "Vector v2 = (" << v2.getX() << ", " << v2.getY() << ")" << std::endl;
    std::cout << "Vector v3 = v1 + v2 = (" << v3.getX() << ", " << v3.getY() << ")" << std::endl;

    return 0;
}
/*
In this program, a class called Vector is defined with private data members x and y, representing the coordinates of a vector in 2D space.

The Vector class has a method called operator+, which overloads the + operator. This method takes another Vector object as an argument and returns a new Vector object, representing the sum of the calling Vector object and the input Vector object.

The main function demonstrates the use of the Vector class and the operator+ method. It creates two Vector objects, v1 and v2, and calculates their sum using the + operator. The result is stored in another Vector object, v3.

The program then prints the coordinates of the vectors v1, v2, and v3.                                                          */