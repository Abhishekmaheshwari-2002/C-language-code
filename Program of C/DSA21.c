// Write a program to perform delete / update operation using product ID, on file.Display the contents of file after delete / update operation
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Product
{
    int id;
    char name[100];
    float price;
} Product;

void updateProduct(FILE *file, int id, Product updatedProduct)
{
    Product product;
    while (fread(&product, sizeof(Product), 1, file) == 1)
    {
        if (product.id == id)
        {
            fseek(file, -sizeof(Product), SEEK_CUR);
            fwrite(&updatedProduct, sizeof(Product), 1, file);
            break;
        }
    }
}

void deleteProduct(FILE *file, int id)
{
    Product product;
    FILE *tempFile = fopen("temp.bin", "wb");

    while (fread(&product, sizeof(Product), 1, file) == 1)
    {
        if (product.id != id)
        {
            fwrite(&product, sizeof(Product), 1, tempFile);
        }
    }

    fclose(tempFile);
    fclose(file);
    remove("products.bin");
    rename("temp.bin", "products.bin");

    file = fopen("products.bin", "rb+");
}

void displayProducts(FILE *file)
{
    Product product;
    while (fread(&product, sizeof(Product), 1, file) == 1)
    {
        printf("Product ID: %d\n", product.id);
        printf("Product Name: %s\n", product.name);
        printf("Product Price: %.2f\n", product.price);
    }
}

int main()
{
    FILE *file;
    int id;
    Product updatedProduct;

    file = fopen("products.bin", "rb+");
    if (file == NULL)
    {
        printf("Error: Unable to open the file.\n");
        exit(1);
    }

    printf("Enter product ID to update/delete: ");
    scanf("%d", &id);

    if (searchProduct(file, id))
    {
        printf("Product found.\n");

        int operation;
        printf("Enter 1 to update product, 2 to delete product: ");
        scanf("%d", &operation);

        if (operation == 1)
        {
            printf("Enter new product details:\n");
            printf("Product Name: ");
            scanf("%s", updatedProduct.name);
            printf("Product Price: ");
            scanf("%f", &updatedProduct.price);
            updatedProduct.id = id;

            updateProduct(file, id, updatedProduct);
        }
        else if (operation == 2)
        {
            deleteProduct(file, id);
        }
    }
    else
    {
        printf("Product not found.\n");
    }

    displayProducts(file);

    fclose(file);

    return 0;
}
/*
In this program, we added the updateProduct function that takes a file pointer, a product ID, and an updated product struct as input. It searches for the product in the file, and when it finds the product, it updates the product's details in the file.

We also added the deleteProduct function that takes a file pointer and a product ID as input. It searches for the product in the file, and when it finds the product, it deletes the product from the file.

In the main function, we added an option for the user to update or delete a product. If the user chooses to update a product, they enter the new details for the product, and the updateProduct function is called. If the user chooses to delete a product, the deleteProduct function is called.

After performing the update/delete operation, the displayProducts function is called to display the contents of the file.



*/