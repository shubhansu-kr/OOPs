// Test - CGPA to Percentage

#include <iostream>
using namespace std;

class Sem
{
    float cg;

public:
    static float factor;
    inline void setdata();
    float getPercent()
    {
        return factor * cg;
    }
};

float Sem ::factor = 9.5;

void Sem ::setdata()
{
    cout << "Enter CGPA : " ;
    cin >> cg;
}

int main()
{
    Sem S;
    S.setdata();
    cout << "Percentage : " << S.getPercent() << endl;

    return 0;
}