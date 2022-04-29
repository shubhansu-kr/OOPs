#include<iostream>
using namespace std;

template <class dt1, class dt2>
void myMin(dt1 a, dt2 b)
{
	if(a>b) cout<<b<<endl;
	else cout<<a<<endl;
}

int main()
{
	myMin(2,5);
	myMin(3.4,2.2);
	myMin('a','b');
	myMin(2,3.5);
	myMin(3.4,'a');
	myMin('a',2);
	return 0;
}