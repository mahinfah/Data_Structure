#include <iostream>
#include <string>

using namespace std;

struct Book {
  string title;
  string author;
  string type;
  bool read;

  void displayBook() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Type: " << type << endl;
    cout << "Read: " << (read ? "Yes" : "No") << endl;
  }
};

int main() {
  Book bookList[100];
  int numofBooks = 0;

  int choice;
  do {
    cout << "Book List Management System"<<endl;
    cout << "1. Add a book"<<endl;
    cout << "2. Display all books"<<endl;
    cout << "3. Exit"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        if (numofBooks == 100) {
          cout << "Book list is full.";
        } else {
          cout << "Enter book title: ";
          getline(cin, bookList[numofBooks].title);
          cout << "Enter book author: ";
          getline(cin, bookList[numofBooks].author);
          cout << "Enter book type: ";
          getline(cin, bookList[numofBooks].type);
          bookList[numofBooks].read = false;
          numofBooks++;
          cout << "Book added successfully."<<endl;
        }
        break;
      case 2:
        if (numofBooks == 0) {
          cout << "No books in the list!"<<endl;
        } else {
          cout << " Book List: "<<endl;
          for (int i = 0; i < numofBooks; i++) {
            bookList[i].displayBook();
            cout << endl;
          }
        }
        break;
      case 3:
        cout << "Exiting Book List Management System"<<endl;
        break;
      default:
        cout << "Invalid choice."<<endl;
    }
  } while (choice != 3);

  return 0;
}
