// Friend Function

#include <iostream>
using namespace std;

class W; // Forward declaration to avoid error

class Q
{
    int a, b;

    // friend int sum(Q &A);  // We can declare friend in private as well
public:
    void setdata()
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
    }
    friend int sum(Q &A);
    friend int sum1(Q &A, W &B);
};

class W
{
    int a, b;

public:
    void setdata()
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
    }
    friend int sum1(Q &A, W &B);
};

// Friend of one class.
int sum(Q &A) // Always use refrence variable - better memory management
{
    return A.a + A.b;
}

// Friend function of 2 class
int sum1(Q &A, W &B)
{
    return A.a + B.a;
}

int main()
{

    Q S;
    S.setdata();
    cout << "Sum is : " << sum(S) << endl;

    W T;
    T.setdata();
    cout << "Sum of T and S (a) is : " << sum1(S, T) << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// class A
// {
//     int a, b; // pvt members
// public:
//     void ip()
//     {
//         a = 10;
//         b = 40;
//     } // member func or cin>>a>>b
//     friend void sum(A &o2);
// };
// void sum(A &o2)
// {
//     int s;
//     s = o2.a + o2.b;
//     cout << "Sum= " << s;
// }
// main()
// {
//     A o1;
//     o1.ip(); // a:10 b:40
//     sum(o1);
// }

// #include <iostream>
// using namespace std;
// class B; // forwarded declaration
// class A
// {
//     int a; // pvt members
// public:
//     void ipA()
//     {
//         a = 10;
//     } // member func or cin>>a
//     friend void sum(A o1, B o2);
// } objA;
// class B
// {
//     int b; // pvt members
// public:
//     void ipB()
//     {
//         b = 40;
//     } // member func or cin>>b
//     friend void sum(A o1, B o2);
// } objB;

// void sum(A o1, B o2)
// {
//     int s;
//     s = o1.a + o2.b;
//     cout << "Sum= " << s;
// }
// main()
// {

//     objA.ipA(); // taking a value
//     objB.ipB(); // taking b value
//     sum(objA, objB);
// }