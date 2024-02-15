// Develop a C++ program for geometric calculations. Create classes for shapes such
// as circles, rectangles, and triangles. Allow the user to input dimensions for these
// shapes, calculate areas, and display the results
#include <iostream>
#include <string>

class Shape
{
public:
    virtual ~Shape() {}
    virtual double getArea() const = 0;
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}
    double getArea() const
    {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    double width, height;

public:
    Rectangle(double width, double height) : width(width), height(height) {}
    double getArea() const
    {
        return width * height;
    }
};

class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double base, double height) : base(base), height(height) {}
    double getArea() const
    {
        return 0.5 * base * height;
    }
};

int main()
{
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    Circle circle(radius);

    double width, height;
    std::cout << "Enter the width and height of the rectangle: ";
    std::cin >> width >> height;
    Rectangle rectangle(width, height);

    double base, height2;
    std::cout << "Enter the base and height of the triangle: ";
    std::cin >> base >> height2;
    Triangle triangle(base, height2);

    std::cout << "The area of the circle is: " << circle.getArea() << std::endl;
    std::cout << "The area of the rectangle is: " << rectangle.getArea() << std::endl;
    std::cout << "The area of the triangle is: " << triangle.getArea() << std::endl;

    return 0;
}

/*In this program, the main function demonstrates the use of the Circle, Rectangle, and Triangle classes. Each shape class is derived from the Shape base class and provides its own implementation of the getArea function to calculate its area.

The user is prompted to input the dimensions of the shapes. The areas of the shapes are then calculated and displayed.

This program serves as a simple implementation of a geometric calculations system. The classes can be extended to include additional shapes or functionalities as needed.*/
