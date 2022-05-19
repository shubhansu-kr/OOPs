//

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A " << endl;
    }
    ~A()
    {
        cout << "B" << endl;
    }
    void  virtual show () = 0 ;
};
class B : public A
{
    // 
    public : 
    void show () {
        cout << "hell "<< endl; 
    }
};

class C : public B {
    public : 
    virtual void show () {
        cout << "C " << endl;
    }
};
int main()
{
    int *ptr;
    ptr = new int(34.54);
    cout << *ptr;

    // A obj;
    // B *ptr = NULL;

    int *p = new int;
    *p = 32;
    cout << *p << endl;
    cout << p << endl;

    C obj3 ;
    obj3.show() ;
    return 0;
}