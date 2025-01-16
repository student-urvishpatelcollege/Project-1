#include <iostream>
using namespace std;

int main() {
    float score;
    char grade;

    cout<<"Enter your score : ";
    cin>>score;

// ternary operator
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    cout << "Your grade is: " << grade << endl;

// switch case
    switch (grade)
    {
    case 'A':
        cout<<"Excellent work"<<endl;
        break;
    case 'B':
        cout<<"Well Done"<<endl;
        break;
    case 'C':
        cout<<"Good job"<<endl;
        break;
    case 'D':
        cout<<"You Passed, but you could do better"<<endl;
        break;
    case 'E':
        cout<<"Sorry, you failed"<<endl;
        break;
    case 'F':
        cout<<"Sorry, you failed"<<endl;
        break;
    default:
        cout<<"Invalid grade"<<endl;
        break;
    }

// if else
    if (grade == 'A')
    {
        cout<<"Congratulations! You are eligible for the next level."<<endl;
    }
    else if (grade == 'B')
    {
        cout<<"Congratulations! You are eligible for the next level."<<endl;
    }
    else if (grade == 'C')
    {
        cout<<"Congratulations! You are eligible for the next level."<<endl;
    }
    else if (grade == 'D')
    {
        cout<<"Congratulations! You are eligible for the next level."<<endl;
    }
    else if (grade == 'E')
    {
        cout<<"Please try again next time."<<endl;
    }
    else if (grade == 'F')
    {
        cout<<"Please try again next time."<<endl;
    }
    else
    {
        cout<<"Invalid grade"<<endl;
    }
    return 0;
}