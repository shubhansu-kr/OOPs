// Class to Class Conversion

// This conversion can be achieved in two ways - Parameterised constructor
// and cast overloading.

#include <iostream>
using namespace std;

class hrs;
class mins;

// using parameterised constructor

class mins
{
    int a;

public:
    mins()
    {
        a = 0;
    };
    mins(int a) : a(a){};
    int getdata1()
    {
        return a;
    }

    // cast overloading 
};

class hrs
{
    int a;

public:
    hrs()
    {
        a = 0;
    };
    hrs(int a) : a(a){};
    hrs(mins m)
    {
        a = m.getdata1() / 60;
    }
    int getdata()
    {
        return a;
    }
};

int main()
{
    hrs obj1(4);
    mins obj2(124);
    cout << "Hrs : " << obj1.getdata() << endl;
    cout << "mins : " << obj2.getdata1() << endl;

    // hrs = mins ; mins is the source and hrs is the destination
    // Login in hrs class -> Parameterised constructor
    obj1 = obj2;
    cout << "Hrs : " << obj1.getdata() << endl;
    cout << "mins : " << obj2.getdata1() << endl;

    return 0;
}

// #include <iostream>
// using namespace std;
// class minutes
// {
//     int m;

// public:
//     minutes(int ms)
//     {
//         m = ms;
//     }
//     /* operator hours()
//     {
//     hours h1;
//     h1.h = m/60;
//     return(h1);
//     }*/
//     void show()
//     {
//         cout << "Minutes = " << m << "\n";
//     }
//     int getdata()
//     {
//         return m;
//     }
// };

// class hours
// {
// public:
//     int h;
//     hours()
//     {
//         h = 0;
//     }

//     void show()
//     {
//         cout << "Hours = " << h << "\n";
//     }
//     hours(minutes mm)
//     {
//         h = mm.getdata() / 60;
//     }
// };

// int main()
// {
//     minutes min(243);
//     hours hr(min);
//     // hr = min; //class minutes to class hours
//     min.show();
//     hr.show();
//     return 0;
// }