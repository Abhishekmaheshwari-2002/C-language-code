// Create a C++ program to manage a library catalogue. Design classes for books and
// library catalogue entries. Allow the user to add new books, search for books, and
// display information about available books
#include <iostream>
#include <vector>
#include <string>

class Book
{
private:
    std::string title;
    std::string author;
    int publicationYear;

public:
    Book(std::string title, std::string author, int publicationYear)
        : title(title), author(author), publicationYear(publicationYear) {}

    std::string getTitle() { return title; }
    std::string getAuthor() { return author; }
    int getPublicationYear() { return publicationYear; }
};

class LibraryCatalogue
{
private:
    std::vector<Book> books;

public:
    void addBook(std::string title, std::string author, int publicationYear)
    {
        books.push_back(Book(title, author, publicationYear));
    }

    Book searchBook(std::string title)
    {
        for (int i = 0; i < books.size(); i++)
        {
            if (books[i].getTitle() == title)
            {
                return books[i];
            }
        }
        return Book("", "", 0);
    }

    void displayBooks()
    {
        for (int i = 0; i < books.size(); i++)
        {
            std::cout << "Title: " << books[i].getTitle()
                      << ", Author: " << books[i].getAuthor()
                      << ", Publication Year: " << books[i].getPublicationYear() << std::endl;
        }
    }
};

int main()
{
    LibraryCatalogue catalogue;
    catalogue.addBook("The Catcher in the Rye", "J.D. Salinger", 1951);
    catalogue.addBook("To Kill a Mockingbird", "Harper Lee", 1960);
    catalogue.addBook("1984", "George Orwell", 1949);

    catalogue.displayBooks();

    Book book = catalogue.searchBook("1984");
    if (book.getTitle() != "")
    {
        std::cout << "Book found: " << book.getTitle()
                  << ", Author: " << book.getAuthor()
                  << ", Publication Year: " << book.getPublicationYear() << std::endl;
    }
    else
    {
        std::cout << "Book not found." << std::endl;
    }

    return 0;
}
/*
In this program, the main function demonstrates the use of the Book and LibraryCatalogue classes. A new LibraryCatalogue object is created. Three books are added to the catalogue. The information of all the books in the catalogue is then displayed.

A book search is then performed using the title "1984". If the book is found, its information is displayed. If the book is not found, a message is displayed indicating so.

This program serves as a simple implementation of a library catalogue management system. The classes can be extended to include additional functionality as needed.*/