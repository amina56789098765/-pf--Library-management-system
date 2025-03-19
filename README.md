# -pf--Library-management-system
Library Management System
A simple C++ Library Management System that allows users to add books, display available books, search for a book, issue books, and return books.

Features
✅ Add books to the library
✅ Display all available books
✅ Search for a book by title
✅ Issue a book to a user
✅ Return a book and check for late returns
Installation and Compilation
Using g++ (For Windows, Linux, MacOS)
Open a terminal or command prompt.
Navigate to the folder where the source code is saved.
Compile the code using:
sh
Copy code
g++ library_management.cpp -o library_management
Run the compiled executable:
sh
Copy code
./library_management
How to Use
Once the program starts, a menu will be displayed with multiple options:

Add Book - Enter the book title to add it to the library.
Display Books - View a list of all available books.
Search Book - Search for a book by entering its title.
Issue Book - Issue a book by entering the book name and issue date.
Return Book - Return a book, check if it's late, and apply a fine if necessary.
Exit - Close the program.
Code Structure
addBook() - Adds a new book to the library.
displayBooks() - Displays all books in the library.
searchBook() - Searches for a book by title.
issueBook() - Issues a book and sets a return deadline.
returnBook() - Returns a book and checks for late fees.
Example Usage
Adding a Book
mathematica
Copy code
Enter book title: Introduction to C++
Book added successfully!
Searching for a Book
pgsql
Copy code
Enter book title to search: Introduction to C++
Book found!
Issuing a Book
pgsql
Copy code
Enter the name of the book, you want to issue: Introduction to C++
Enter date of issue: 5
Please return the book before the 10th of next month.
Returning a Book (On Time)
vbnet
Copy code
Enter the name of the book, you had issued: Introduction to C++
Enter the name of the book, you want to return: Introduction to C++
Enter today's date: 8
Thank you for returning the book on time.
Returning a Book (Late)
vbnet
Copy code
Enter the name of the book, you had issued: Introduction to C++
Enter the name of the book, you want to return: Introduction to C++
Enter today's date: 15
Sorry, you are late. You have to pay a 1000 fine.
Future Enhancements
🔹 Store book data persistently using a file system.
🔹 Add a user authentication system.
🔹 Implement a graphical user interface (GUI).
License
This project is open-source and available under the MIT License.

Contributions
Pull requests are welcome! If you have suggestions for improvements, feel free to contribute.
