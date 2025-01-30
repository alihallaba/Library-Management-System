#include "Library.h"
#include <iostream>
#include <vector>
using namespace std;

// Constructor
Library::Library() {
    // Initialize any necessary data members here
}

// Function to handle admin operations
void Library::addmin() {
    Admin admin;
    int choice;

    cout << "Welcome, Admin!" << endl;
    cout << "1. Add a Book" << endl;
    cout << "2. Remove a Book" << endl;
    cout << "3. Show All Books" << endl;
    cout << "4. Show All Users" << endl;
    cout << "5. Remove a User" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            admin.addbook();
            break;
        case 2:
            admin.removebook();
            break;
        case 3:
            showBooks();
            break;
        case 4:
            admin.showusers();
            break;
        case 5:
            admin.removeuser();
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}

// Function to handle customer operations
void Library::custprog() {
    Customer customer;
    int choice;

    cout << "Welcome, Customer!" << endl;
    cout << "1. Borrow a Book" << endl;
    cout << "2. Return a Book" << endl;
    cout << "3. View Borrowed Books" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            customer.bbook();
            break;
        case 2:
            // Implement return book functionality
            cout << "Returning a book..." << endl;
            break;
        case 3:
            // Implement view borrowed books functionality
            cout << "Viewing borrowed books..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}

// Function to display all books in the library
void Library::showBooks() {
    cout << "Displaying all books in the library:" << endl;
    // Loop through the vector of books and display their information
    for (const auto& book : sample) {
        book.binfo();
    }
}