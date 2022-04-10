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
public:
    int book_id;
    string book_name, book_author;
    float book_price;

    void setInfo()
    {
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
        system("cls");
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

void writeInFile(Book *obj, int n)
{
    fstream fout("../record.txt", ios::out);
    for (int i = 0; i < n; i++)
    {
        if (obj[i].book_price < 500)
        {
            fout.write((char *)&obj[i], sizeof(obj[i]));
        }
    }
}

void readFromFile()
{
    fstream file("../record.txt", ios::in);
    string line;
    while (file)
    {
        getline(file, line);
        cout << line << endl;
    }
}

void updateFile(Book *obj, int temp_id, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (obj[i].book_id == temp_id)
        {
            cout << "Enter updated data : " << endl;
            obj[i].setInfo();
        }
    }
    writeInFile(obj, n);
}

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

    int temp_id;
    cout << "Enter the Book_id to update : ";
    cin >> temp_id;

    fstream fin;
    fin.open("../record.txt", ios::in);

    int flag = 0;
    Book temp;
    while (!fin.eof())
    {
        fin.read((char *)&temp, sizeof(temp));
        if (temp_id == temp.book_id)
        {
            flag = 1;
            updateFile(obj, temp_id, n);
        }
    }
    if (flag)
    {
        readFromFile();
    }
    else
    {
        cout << "Record not found " << endl;
    }
    return 0;
}