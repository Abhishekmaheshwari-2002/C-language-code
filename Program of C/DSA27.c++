// Implement a C++ program to manage student grades. Design classes for students
// and courses. Allow the user to input student grades for various courses, calculate
// and display the results
#include <iostream>
#include <vector>
#include <string>

class Course
{
private:
    std::string name;
    std::string grade;

public:
    Course(std::string name, std::string grade) : name(name), grade(grade) {}

    std::string getName() { return name; }
    std::string getGrade() { return grade; }

    void setGrade(std::string grade) { this->grade = grade; }
};

class Student
{
private:
    std::string name;
    std::vector<Course> courses;

public:
    Student(std::string name) : name(name) {}

    void addCourse(std::string name, std::string grade)
    {
        courses.push_back(Course(name, grade));
    }

    void updateCourseGrade(std::string name, std::string grade)
    {
        for (int i = 0; i < courses.size(); i++)
        {
            if (courses[i].getName() == name)
            {
                courses[i].setGrade(grade);
                break;
            }
        }
    }

    std::vector<Course> getCourses() { return courses; }
};

int main()
{
    Student s1("Alice");
    s1.addCourse("Math", "A");
    s1.addCourse("Science", "B");

    std::cout << "Student's name: " << s1.name << std::endl;

    std::vector<Course> courses = s1.getCourses();
    for (int i = 0; i < courses.size(); i++)
    {
        std::cout << "Course: " << courses[i].getName() << ", Grade: " << courses[i].getGrade() << std::endl;
    }

    s1.updateCourseGrade("Math", "B");

    std::cout << "Student's name: " << s1.name << std::endl;

    courses = s1.getCourses();
    for (int i = 0; i < courses.size(); i++)
    {
        std::cout << "Course: " << courses[i].getName() << ", Grade: " << courses[i].getGrade() << std::endl;
    }

    return 0;
}
/*
In this program, the main function demonstrates the use of the Student and Course classes. A new Student object named Alice is created. Two courses are added to Alice's course list. The information of Alice and her courses is then displayed.

The grade of Alice in Math is then updated to B. The updated information of Alice and her courses is displayed.

This program serves as a simple implementation of a student grade management system. The classes can be extended to include additional functionality as needed.*/