// Basic to User

#include <iostream>
using namespace std;

class Timer
{
    int hrs, mins;
    // int secs

public:
    Timer(){};   // Default constructor
    Timer(int a) // Paramerterised constructor to convert int to class timer
    {
        // Logic for conversion goes here
        hrs = a / 60;
        mins = a % 60;

        /*
            If a is seconds
            hrs = a / 3600 ;
            a %= 3600 ;
            mins = a / 60 ;
            secs = a % 60 ;
        */
    }
    void displayTimer()
    {
        cout << hrs << ":" << mins << endl;
        // cout << hrs << ":" << mins<< ":"<< secs << endl;
    }
};

int main()
{
    // Create an object of timer class
    Timer t1(435), t2;
    t1.displayTimer();

    int duration = 324; // mins
    t2 = duration;      // int -> timer
    t2.displayTimer();

    return 0;
}