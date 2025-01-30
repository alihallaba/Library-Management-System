# Library Management System

## Overview

The Library Management System is a C++ project that allows users to manage and maintain books in a library. It provides functionalities such as adding, removing, and searching for books, as well as managing library members. The system is designed to be easy to use and provides an intuitive interface for both administrators and library users.

## Features

- **Book Management**: Add, delete, and view books.
- **Member Management**: Register, remove, and manage library members.
- **Search Functionality**: Search books by title, author, or ISBN.
- **Book Borrowing**: Issue and return books to library members.
- **Fine Management**: Track overdue books and calculate fines.

## Requirements

- **C++ Compiler** (e.g., g++, clang++)
- **Operating System**: Cross-platform (works on Windows, Linux, and macOS)
  
## Installation

To install and run the Library Management System:

1. Clone the repository to your local machine:

```bash
git clone https://github.com/your-username/library-management-system.git
```

2. Navigate to the project directory:

```bash
cd library-management-system
```

3. Compile the code:

```bash
g++ -o library_management main.cpp
```

4. Run the program:

```bash
./library_management
```

## Usage

Once the program is running, you can perform various operations like:

- Add new books to the library
- Register new library members
- Issue and return books
- View and search books
- View fines for overdue books

Follow the on-screen prompts to interact with the system.

## Code Structure

- **main.cpp**: Contains the main entry point of the system and overall program flow.
- **Book.h & Book.cpp**: Defines the `Book` class with attributes like title, author, ISBN, etc.
- **Member.h & Member.cpp**: Defines the `Member` class for library members.
- **Library.h & Library.cpp**: Contains the main logic for managing books and members.
- **Utility.h & Utility.cpp**: Helper functions for input validation and file handling.

## Contributing

If you'd like to contribute to this project, feel free to fork the repository, create a new branch, and submit a pull request with your improvements or bug fixes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Thanks to all contributors for improving this system!
- This project is inspired by various open-source library management systems.
