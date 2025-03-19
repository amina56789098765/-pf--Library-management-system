#include <iostream>
#include <string>

using namespace std;

// Function prototypes
void addBook(string books[], int& bookCount);
void displayBooks(string books[], int bookCount);
void searchBook(string books[], int bookCount);
void issueBook(string books[], int& bookCount);
void returnBook(string books[], int& bookCount);

int main() {
    string books[100]; // Array to store book titles
    int bookCount = 0; // Variable to track number of books
    int choice;

    do {
        cout << "\n*******Library Management System*******" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Return Book" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook(books, bookCount);
                break;
            case 2:
                displayBooks(books, bookCount);
                break;
            case 3:
                searchBook(books, bookCount);
                break;
            case 4:
                issueBook(books, bookCount);
                break;
            case 5:
                returnBook(books, bookCount);
                break;
            case 6:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 6);

    return 0;
}

// Function to add a book to the library
void addBook(string books[], int& bookCount) {
    if (bookCount < 100) {
        cout << "Enter book title: ";
        cin.ignore(); // Clear input buffer
        getline(cin, books[bookCount]);
        bookCount++;
        cout << "Book added successfully!" << endl;
    } else {
        cout << "Library is full!" << endl;
    }
}

// Function to display all books in the library
void displayBooks(string books[], int bookCount) {
    if (bookCount > 0) {
        cout << "\nAvailable Books:" << endl;
        for (int i = 0; i < bookCount; i++) {
            cout << i + 1 << ". " << books[i] << endl;
        }
    } else {
        cout << "No books in the library!" << endl;
    }
}

// Function to search for a book by title
void searchBook(string books[], int bookCount) {
    string title;
    cout << "Enter book title to search: ";
    cin.ignore(); // Clear input buffer
    getline(cin, title);

    bool found = false;
    for (int i = 0; i < bookCount; i++) {
        if (books[i] == title) {
            cout << "Book found!" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book not found!" << endl;
    }
}

// Function to issue a book to a user 
void issueBook(string books[], int& bookCount) {
    // Implementation for issuing a book
    string bookissue;
    cout<<"Enter the name of the book, you want to issue ";
    cin>>bookissue;
    int dateissue;
    cout<<"Enter date of issue ";
    cin>>dateissue;
    cout<<"Please return book before 10 of next month ";
}
// Function to return a book to the library 
void returnBook(string books[], int& bookCount) {
    // Implementation for returning a book
    string bookissue;
    string bookreturn;
    cout<<"Enter the name of the book, you had issued ";
    cin>>bookissue;
    cout<<"Enter the name of the book, you want to return ";
    cin>>bookreturn;
    if(bookissue==bookreturn){
    	
    int datereturn;
    cout<<"Enter today's date";
    cin>>datereturn;
    if(datereturn<10){
    	cout<<"Thank you for returning the book on time";
	}
	else{
		cout<<"Sorry, you are late, you have to pay 1000 fine.";
	}
}
     else{
     	cout<<"You don't have issue this book from this library"<<endl;
	 }
}


