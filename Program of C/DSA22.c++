// Write a C++ program to exchange values between two classes using friend classes
#include <iostream>
using namespace std;

class ClassA
{
    int a;

public:
    void setValue(int a)
    {
        this->a = a;
    }
    friend class ClassB;
};

class ClassB
{
    int b;

public:
    void setValue(int b)
    {
        this->b = b;
    }
    friend class ClassA;
};

void exchangeValues(ClassA &a, ClassB &b)
{
    int temp = a.a;
    a.a = b.b;
    b.b = temp;
}

int main()
{
    ClassA a;
    ClassB b;

    a.setValue(10);
    b.setValue(20);

    cout << "Before exchange: \n";
    cout << "a = " << a.a << endl;
    cout << "b = " << b.b << endl;

    exchangeValues(a, b);

    cout << "After exchange: \n";
    cout << "a = " << a.a << endl;
    cout << "b = " << b.b << endl;

    return 0;
}
/*In this program, we have two classes ClassA and ClassB each with an integer member variable. Both classes have a setValue function that sets the value of the integer variable.

The exchangeValues function takes references to objects of both classes. Inside this function, we use the friend keyword to declare the other class as a friend class. This allows the friend class to access the private members of the other class.

In the main function, we create objects of both classes and set their integer values. Then, we call the exchangeValues function to exchange the values of the integer variables of both objects. Finally, we display the values of the integer variables before and after the exchange operation.*/