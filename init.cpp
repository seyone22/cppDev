#include <iostream>

using namespace std;

double getdoubleinput(string message)
{
    string input;
    cout << message << endl
         << ">>";
    cin >> input;
    double output = stod(input);
    return output;
}

char findgrade(int marks) //error is the error code
{
    if (marks > 100 || marks < 0)
        return 'invalid';
    else if (marks >= 75)
        return 'A';
    else if (marks >= 65)
        return 'B';
    else if (marks >= 55)
        return 'C';
    else if (marks >= 45)
        return 'D';
    else
        return 'E';
}

int findgpv(int marks) //99 is the error code
{
    if (marks > 100 || marks < 0)
        return 99;
    else if (marks >= 75)
        return 4;
    else if (marks >= 65)
        return 3;
    else if (marks >= 55)
        return 2;
    else if (marks >= 45)
        return 1;
    else
        return 0;
}

struct student
{
    int i;
    double marks[];
};


int main()
{
    //double to int conversion done automatically here.
    //No expected loss of data since no of subjects and marks are integers
    int studentCount = getdoubleinput("Please enter the number of students");
    int subjectCount = getdoubleinput("Please enter how many subjects are to be taken");

    for (int i = 0; i < studentCount; i++)
    {
        struct student *i; 
    }
    

    for (int i = 0; i < studentCount; i++)
    {
        cout << "\tStudent " << i+1 << endl;
        for (int j = 0; j < subjectCount; j++)
        {
            cout << "Subject " << j+1 << endl;
            student.marks[j];
        }
    }




    system("pause");
    return 0;
}