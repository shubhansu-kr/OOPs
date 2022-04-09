// CA2 Question 3 - Class to basic conversion

#include <iostream>
using namespace std;

class Triangle
{
    float base, height;

public:
    Triangle(){};
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    };

    operator float()
    {
        int area = 0.5 * base * height;
        return area;
    }
};

int main()
{
    Triangle t1(4, 8);
    float area = t1;
    cout << area << endl;
    return 0;
}