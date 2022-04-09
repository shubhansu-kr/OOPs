// CA-2 Question 1 :

#include <iostream>
#include <fstream>
using namespace std;

class Book
{
public:
    static int id;
    int book_id;
    string book_name, book_author;
    float book_price;

    Book()
    {
        id++;
        book_id = id;
        cout << "Book_id : " << id << endl;
        cout << "Enter Book_name : ";
        cin.ignore();
        getline(cin, book_name);
        cout << "Enter Author name : ";
        getline(cin, book_author);
        cout << "Enter book price : ";
        cin >> book_price;
        cout << endl; // For better clarity on console log
    }

    void getInfo()
    {
        cout << "Book_id : " << book_id << endl;
        cout << "Book_name : " << book_name << endl;
        cout << "Author Name : " << book_author << endl;
        cout << "Book Price : " << book_price << endl;
        cout << endl;
    }
};

int Book::id = 1000;

int main()
{
    int n;
    cout << "Enter the number of books : ";
    cin >> n;

    Book obj[n];

    fstream file("../record.txt", ios::app);
    for (int i = 0; i < n; i++)
    {
        if (obj[i].book_price < 500)
        {
            file << obj[i].book_id << " " << obj[i].book_name << " " << obj[i].book_author << " " << obj[i].book_price << endl;
        }
    }

    return 0;
}