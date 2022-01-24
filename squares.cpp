//write a small c++ program to print the square using ".". The program should prompt user to enter the width/height.
//Author: S.G.Seyone

#include <iostream>

using namespace std;

int main() {
    int dimension = 0;

    cout << "Please enter the dimensions of the square you want to make" << endl << ">>";
    cin >> dimension;

    for (int i = 0; i < dimension; i++)
    {
        for (int i = 0; i < dimension; i++)
        {
            cout << ".";
        }
        cout << endl;
    }
    return 0;
}
