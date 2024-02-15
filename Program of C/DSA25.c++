// Create a C++ program to manage an employee payroll system. Design classes for
// employees and salaries. Allow the user to input employee details such as name,
// hours worked, and hourly rate. Calculate and display the total salary for each
// employee
#include <iostream>
#include <string>

class Employee
{
    std::string name;
    float hoursWorked;
    float hourlyRate;

public:
    void setData(std::string name, float hoursWorked, float hourlyRate)
    {
        this->name = name;
        this->hoursWorked = hoursWorked;
        this->hourlyRate = hourlyRate;
    }

    float computeSalary()
    {
        return hoursWorked * hourlyRate;
    }

    void displayData()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Hours Worked: " << hoursWorked << std::endl;
        std::cout << "Hourly Rate: " << hourlyRate << std::endl;
        std::cout << "Total Salary: " << computeSalary() << std::endl;
    }
};

int main()
{
    int n;
    std::cout << "Enter the number of employees: ";
    std::cin >> n;

    Employee employees[n];

    // Read and store the employee data
    for (int i = 0; i < n; i++)
    {
        std::string name;
        float hoursWorked;
        float hourlyRate;

        std::cout << "Enter employee " << i + 1 << " details:" << std::endl;
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << "Hours Worked: ";
        std::cin >> hoursWorked;
        std::cout << "Hourly Rate: ";
        std::cin >> hourlyRate;

        employees[i].setData(name, hoursWorked, hourlyRate);
    }

    // Display the employee data
    for (int i = 0; i < n; i++)
    {
        std::cout << "Employee " << i + 1 << " details:" << std::endl;
        employees[i].displayData();
        std::cout << std::endl;
    }

    return 0;
}
/*
In this program, we have an Employee class with three data members: name, hoursWorked, and hourlyRate. The class has a setData function to set the values of these data members, a computeSalary function to compute the total salary of the employee, and a displayData function to display the values of these data members and the total salary.

In the main function, we read the number of employees from the user and create an array of Employee objects. We use a loop to read the name, hours worked, and hourly rate of each employee from the user and store it in the corresponding employee object using the setData function.

After reading and storing the employee data, we use another loop to display the data of each employee and compute and display the total salary of each employee using the displayData and computeSalary functions.

The program prompts the user to enter the name, hours worked, and hourly rate of N employees. It then stores this data in the corresponding data members of the Employee objects and displays the entered data along with the computed total salary.*/