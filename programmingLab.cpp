#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ifstream myfile;
    ofstream file;
    file.open("programmingLab.txt", ios::out | ios::app);
    if (file.is_open())
    {
        file << "fundamental of CS" << endl;
        file << "Digital Electronics" << endl;
        file << "Digital Electronics" << endl;
        file << "programming" << endl;
        file << "Linear Algebra" << endl;
        file << "calculus" << endl;
    }
    else
    {
        cout << "not open";
    }
    file.close();
    myfile.open("programmingLab.txt");
    string reader;
    while (getline(myfile, reader))
    {
        cout << reader << endl;
    }

    return 0;
}