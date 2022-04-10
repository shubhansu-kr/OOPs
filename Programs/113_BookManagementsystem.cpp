// CSV

// CSV is a simple file format used to store tabular data such as a
// spreadsheet or a database. CSV stands for Comma Separated Values.
// The data fields in a CSV file are separated/delimited by a comma
// (‘, ‘) and the individual rows are separated by a newline (‘\n’).
// CSV File management in C++ is similar to text-type file management,
// except for a few modifications.

#include <iostream>
#include <fstream>
using namespace std;

class Book
{
    static int count;

public:
    int book_id, recordNumber;
    string book_name, book_author;
    float book_price;

    Book()
    {
        recordNumber = ++count;
    }
    void setInfo()
    {
        cout << endl;
        cout << "Record Number : " << recordNumber << endl;
        cout << "Enter Book_id : ";
        cin >> book_id;
        cout << "Enter Book_name : ";
        cin.ignore();
        getline(cin, book_name);
        cout << "Enter Author name : ";
        getline(cin, book_author);
        cout << "Enter book price : ";
        cin >> book_price;
        cout << endl;
    }

    void getInfo()
    {
        cout << "Record Number : " << recordNumber << endl;
        cout << "Book_id : " << book_id << endl;
        cout << "Book_name : " << book_name << endl;
        cout << "Author Name : " << book_author << endl;
        cout << "Book Price : " << book_price << endl;
        cout << endl;
    }
};

void writeInFile(Book *obj, int n)
{
    fstream file("../record.csv", ios::out);
    for (int i = 0; i < n; i++)
    {
        if (obj[i].book_price < 500)
        {
            file << obj[i].recordNumber << ", " << obj[i].book_id << ", " << obj[i].book_name << ", " << obj[i].book_author << ", " << obj[i].book_price << endl;
        }
    }
    file.close();
}

int Book::count = 0;

int main()
{
    int n;
    cout << "Enter the number of books : ";
    cin >> n;

    Book obj[n];
    for (int i = 0; i < n; i++)
    {
        obj[i].setInfo();
    }

    writeInFile(obj, n);

    return 0;
}