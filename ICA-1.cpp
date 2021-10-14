//Author: S.G.Seyone (2019/ICT/46)
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

char findgrade(int marks) // invalid is the error code
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

int findgpv(int marks) // 99 is the error code
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

int main()
{
    // double to int conversion done automatically here.
    // No expected loss of data since no of subjects and marks are integers
    int studentCount = getdoubleinput("Please enter the number of students");
    int subjectCount = getdoubleinput("Please enter how many subjects are to be taken");

    double dataArray[studentCount][subjectCount];

    for (int i = 0; i < studentCount; i++)
    {
        cout << "\tStudent " << i + 1 << endl;
        for (int j = 0; j < subjectCount; j++)
        {
            cout << "Subject " << j + 1 << endl;
            dataArray[i][j] = getdoubleinput("Please enter the marks of student");
        }
    }

    for (int i = 0; i < studentCount; i++)
    {
        cout << "Student " << i + 1 << endl;
        double gpvRunningTot = 0;
        for (int j = 0; j < subjectCount; j++)
        {
            cout << "\tSubject " << j + 1 << ":"
                 << "\tMarks : " << dataArray[i][j]
                 << "\tGrade : " << findgrade(dataArray[i][j])
                 << "\tGPV : " << findgpv(dataArray[i][j])
                 << endl;
            gpvRunningTot += (findgpv(dataArray[i][j]) * 2);
        }
        cout << "\tTotal GPV = " << gpvRunningTot
             << "\tTotal Credits = " << subjectCount * 2
             << "\tGPA = " << gpvRunningTot / (subjectCount * 2)
             << endl;
    }
    return 0;
}