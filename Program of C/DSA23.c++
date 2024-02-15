// Write a C++ program to display names, rollnos and grades of 3 students whohave appeared in the examination.Declare the class of name, rollnos and grade.Create an array of class objects.Read and display the contents of the array
#include <iostream>
#include <string>

class Student
{
    std::string name;
    int rollno;
    float grade;

public:
    void setData(std::string name, int rollno, float grade)
    {
        this->name = name;
        this->rollno = rollno;
        this->grade = grade;
    }

    void displayData()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll No: " << rollno << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }
};

int main()
{
    Student students[3];

    // Read and store the student data
    for (int i = 0; i < 3; i++)
    {
        std::string name;
        int rollno;
        float grade;

        std::cout << "Enter student " << i + 1 << " details:" << std::endl;
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << "Roll No: ";
        std::cin >> rollno;
        std::cout << "Grade: ";
        std::cin >> grade;

        students[i].setData(name, rollno, grade);
    }

    // Display the student data
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Student " << i + 1 << " details:" << std::endl;
        students[i].displayData();
        std::cout << std::endl;
    }

    return 0;
}
/*In this program, we have a Student class with three data members: name, rollno, and grade. The class has a setData function to set the values of these data members and a displayData function to display the values of these data members.

In the main function, we create an array of Student objects. We use a loop to read the name, rollno, and grade of each student from the user and store it in the corresponding student object using the setData function.

After reading and storing the student data, we use another loop to display the data of each student using the displayData function.

The program prompts the user to enter the name, rollno, and grade of 3 students. It then stores this data in the corresponding data members of the Student objects and displays the entered data*/