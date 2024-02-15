// Write a C++ program to read the data of N employee and compute Net salary of
//     each
//     employee(DA = 52 % of Basic and Income Tax(IT) = 30 % of the gross salary)
//
#include <iostream>
#include <string>

class Employee
{
    std::string name;
    float basicSalary;

public:
    void setData(std::string name, float basicSalary)
    {
        this->name = name;
        this->basicSalary = basicSalary;
    }

    float computeNetSalary()
    {
        float da = basicSalary * 0.52;
        float grossSalary = basicSalary + da;
        float it = grossSalary * 0.30;
        float netSalary = grossSalary - it;
        return netSalary;
    }

    void displayData()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Basic Salary: " << basicSalary << std::endl;
        std::cout << "Net Salary: " << computeNetSalary() << std::endl;
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
        float basicSalary;

        std::cout << "Enter employee " << i + 1 << " details:" << std::endl;
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << "Basic Salary: ";
        std::cin >> basicSalary;

        employees[i].setData(name, basicSalary);
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
In this program, we have an Employee class with two data members: name and basicSalary. The class has a setData function to set the values of these data members, a computeNetSalary function to compute the net salary of the employee, and a displayData function to display the values of these data members and the net salary.

In the main function, we read the number of employees from the user and create an array of Employee objects. We use a loop to read the name and basic salary of each employee from the user and store it in the corresponding employee object using the setData function.

After reading and storing the employee data, we use another loop to display the data of each employee and compute and display the net salary of each employee using the displayData and computeNetSalary functions.

The program prompts the user to enter the name and basic salary of N employees. It then stores this data in the corresponding data members of the Employee objects and displays the entered data along with the computed net salary.*/