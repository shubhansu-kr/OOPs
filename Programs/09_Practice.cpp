// WAP to display the details of n students

#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    float percentage;

public:
    void input();
    void output();
    // char grade(float a);
    char grade();
};

void student ::input()
{
    cout << "Enter roll " << endl;
    cin >> roll;
    cout << "Enter Percentage " << endl;
    cin >> percentage;
}

char student ::grade()
{
    if (percentage >= 90)
    {
        return 'A';
    }
    else if (percentage >= 80)
    {
        return 'B';
    }
    else if (percentage >= 70)
    {
        return 'C';
    }
    else
    {
        return 'D';
    }
}

void student ::output()
{
    cout << "Roll - " << roll << " Percentage - " << percentage << endl;
    cout << "Grade - " << this->grade() << endl;
}

int main()
{
    int n;
    cout << "Enter the no. of students " << endl;
    cin >> n;
    student S[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << " : " << endl;
        S[i].input();
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << " : " << endl;
        S[i].output();
    }

    return 0;
}

// Avesh's Code

// #include<iostream>
// using namespace std;

// class student
// {
// int rno,flag = 0;
// float per;
// public:
// void input();

// void output();

// }s3[5];
// main()
// {
// for(int i=0; i<5;i++){
// s3[i].input();
// s3[i].output();
// }
// }

// void student::input(){
// {
// cout<<"\n Enter the info of student: rno and per "<<endl;
// cin>>rno>>per;
// if (per>=90){
// flag = 1;
// }else if(per<90&&per>=75){
// flag = 2;
// }else if(per<75&&per>=55){
// flag = 3;
// }else if(per<55&&per>=40){
// flag = 4;
// }else{
// flag = 0;
// }
// }
// }
// void student::output()
// {
// {

// cout<<"\nrno= "<<rno<<" and per = "<<per<<endl;
// if(flag==1){
// cout<<"Congrats you have secured : A grade "<< endl;
// }else if(flag==2){
// cout<<"You have secured : B grade "<< endl;
// }else if(flag==3){
// cout<<"You have secured : C grade "<< endl;
// }else if(flag==4){
// cout<<"You have secured : D grade "<< endl;
// }else if(flag==0){
// cout<<"Sorry you have failed the exams"<< endl;
// }
// }
// }