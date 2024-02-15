// Write a program to search the product using product ID in file and display the
//     details if record found.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Product
{
    int id;
    char name[100];
    float price;
} Product;

int searchProduct(FILE *file, int id)
{
    Product product;
    while (fread(&product, sizeof(Product), 1, file) == 1)
    {
        if (product.id == id)
        {
            return 1;
        }
    }
    return 0;
}

void printProductDetails(FILE *file, int id)
{
    Product product;
    while (fread(&product, sizeof(Product), 1, file) == 1)
    {
        if (product.id == id)
        {
            printf("Product ID: %d\n", product.id);
            printf("Product Name: %s\n", product.name);
            printf("Product Price: %.2f\n", product.price);
            break;
        }
    }
}

int main()
{
    FILE *file;
    int id;

    printf("Enter product ID to search: ");
    scanf("%d", &id);

    file = fopen("products.bin", "rb");
    if (file == NULL)
    {
        printf("Error: Unable to open the file.\n");
        exit(1);
    }

    if (searchProduct(file, id))
    {
        printf("Product found.\n");
        printProductDetails(file, id);
    }
    else
    {
        printf("Product not found.\n");
    }

    fclose(file);

    return 0;
}
/*
In this program, we use a binary file called "products.bin" to store the products. The products are stored in a binary file in the form of a struct called Product, which has three fields: id, name, and price.

The searchProduct function takes a file pointer and a product ID as input and returns 1 if the product is found in the file. It does this by reading each record from the file one by one and comparing the product ID in the record with the product ID that the user entered.

The printProductDetails function also takes a file pointer and a product ID as input. It reads each record from the file one by one and, when it finds a record with a product ID that matches the product ID that the user entered, it prints the details of the product.

Finally, in the main function, we ask the user to enter a product ID. We then open the binary file in read mode. We use the searchProduct function to check if the product is in the file. If it is, we use the printProductDetails function to print the details of the product.*/