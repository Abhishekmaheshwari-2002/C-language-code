// Develop a C++ program for managing inventory. Create classes for products and
// inventory. Allow the user to add new products, update product quantities, and
// display the current inventory status
#include <iostream>
#include <string>
#include <vector>

class Product
{
    std::string name;
    int quantity;

public:
    Product(std::string name, int quantity) : name(name), quantity(quantity) {}

    void setQuantity(int quantity)
    {
        this->quantity = quantity;
    }

    std::string getName()
    {
        return name;
    }

    int getQuantity()
    {
        return quantity;
    }
};

class Inventory
{
    std::vector<Product> products;

public:
    void addProduct(std::string name, int quantity)
    {
        products.push_back(Product(name, quantity));
    }

    void updateProductQuantity(std::string name, int quantity)
    {
        for (auto &product : products)
        {
            if (product.getName() == name)
            {
                product.setQuantity(quantity);
                break;
            }
        }
    }

    void displayInventory()
    {
        std::cout << "Current Inventory Status:" << std::endl;
        for (const auto &product : products)
        {
            std::cout << "Name: " << product.getName() << ", Quantity: " << product.getQuantity() << std::endl;
        }
    }
};

int main()
{
    Inventory inventory;

    int choice;
    while (true)
    {
        std::cout << "1. Add Product" << std::endl;
        std::cout << "2. Update Product Quantity" << std::endl;
        std::cout << "3. Display Inventory" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1)
        {
            std::string name;
            int quantity;
            std::cout << "Enter the name of the product: ";
            std::cin >> name;
            std::cout << "Enter the quantity of the product: ";
            std::cin >> quantity;
            inventory.addProduct(name, quantity);
        }
        else if (choice == 2)
        {
            std::string name;
            int quantity;
            std::cout << "Enter the name of the product: ";
            std::cin >> name;
            std::cout << "Enter the updated quantity of the product: ";
            std::cin >> quantity;
            inventory.updateProductQuantity(name, quantity);
        }
        else if (choice == 3)
        {
            inventory.displayInventory();
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
/*
In this program, we have a Product class with three data members: name, and quantity. The class has a constructor that initializes these data members and a setQuantity function to set the value of the quantity data member.

We also have an Inventory class that has a vector of Product objects called products. The class has a addProduct function to add a new product to the vector, an updateProductQuantity function to update the quantity of a product in the vector, and a displayInventory function to display the current inventory status.

In the main function, we create an Inventory object called inventory. We then enter a loop that displays a menu to the user and reads their choice. Depending on the choice, we perform the corresponding operation on the inventory object.

The program provides a menu-driven interface for managing an inventory. The user can add new products, update product quantities, and display the current inventory status.*/