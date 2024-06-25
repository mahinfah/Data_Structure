#include<iostream>
using namespace std;
struct book
{
    string name;
    int id;
    string author;
};
void add(book &b, int n )
{

    cout<<"name: ";
 cin>>b.name;
        cout<<"name: "<<b.name<<endl;;
//
        cout<<"name of author  : ";
                cin>>b.author;
                cout<<"name of author  : "<<b.author<<endl;

        cout<<"id  : ";
        cin>>b.id;
         cout<<"id  : "<<b.id;

}
int main()
{
    int choice;
    cout << "Book List Management System"<<endl;
    cout << "1. Add a book"<<endl;
    cout << "2. Display all books"<<endl;
    cout << "3. Exit"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if(choice==1)
    { int n;
    cout<<"how many books you want to add ? :";
     cin>>n;
    book b[n];


      for(int i = 0 ;i<n;i++)
      {
          add(b[i],n);
          cout<<i;
      }
    }

}
