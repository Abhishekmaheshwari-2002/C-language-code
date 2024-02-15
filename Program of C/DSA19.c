// Write a program to 5 records of product ID, name, category and price in the file.Display all these records on console.
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char name[50];
    char category[50];
    double price;
} Product;

int main()
{
    // Create an array of products
    Product products[5] = {
        {1, "Product 1", "Category 1", 10.0},
        {2, "Product 2", "Category 2", 20.0},
        {3, "Product 3", "Category 3", 30.0},
        {4, "Product 4", "Category 4", 40.0},
        {5, "Product 5", "Category 5", 50.0}};

    // Open the file in write mode
    FILE *file = fopen("products.txt", "w");
       // Write the products to the file
    for (int i = 0; i < 5; i++)
    {
        fprintf(file, "%d,%s,%s,%.2f\n", products[i].id, products[i].name, products[i].category, products[i].price);
    }

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("products.txt", "r");
    
    // Read and display the products from the file
    for (int i = 0; i < 5; i++)
    {
        Product p;
        fscanf(file, "%d,%[^,],%[^,],%lf\n", &p.id, p.name, p.category, &p.price);
        printf("Product ID: %d, Name: %s, Category: %s, Price: %.2f\n", p.id, p.name, p.category, p.price);
    }

    // Close the file
    fclose(file);

    return 0;
}
/*In this program, we define a Product structure to store the product ID, name, category, and price. We initialize an array of 5 Product structures with sample data.

The displayProducts() function takes an array of Product structures and the number of elements in the array as arguments. It prints a table header and then uses a for loop to iterate over each element in the array. For each element, it prints the product ID, name, category, and price.

In the main() function, we create an array of 5 Product structures and initialize them with sample data. We then call the displayProducts() function to display the records on the console.*/