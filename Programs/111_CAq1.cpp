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
        book_id = ++id;
    }

    void setInfo()
    {
        cout << endl;
        cout << "Book_id : " << book_id << endl;
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
        cout << "Book_id : " << book_id << endl;
        cout << "Book_name : " << book_name << endl;
        cout << "Author Name : " << book_author << endl;
        cout << "Book Price : " << book_price << endl;
        cout << endl;
    }
};

int Book::id = 100000;

void writeInFile(Book *obj, int n)
{
    fstream file("../record.txt", ios::out);
    for (int i = 0; i < n; i++)
    {
        if (obj[i].book_price < 500)
        {
            file << obj[i].book_id << " " << obj[i].book_name << " " << obj[i].book_author << " " << obj[i].book_price << endl;
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

    int qId;
    cout << "Enter the book_id to Update : ";
    cin >> qId;

    for (int i = 0; i < n; i++)
    {
        if (obj[i].book_id == qId)
        {
            if (obj[i].book_price >= 500)
            {
                cout << "Record not found : " << endl;
            }
            else
            {
                cout << "Update data : " << endl;
                obj[i].setInfo();
                writeInFile(obj, n);
            }
            break;
        }
    }
    // Display the content of file :
    readFromFile();

    return 0;
}