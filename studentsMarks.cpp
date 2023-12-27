#include <iostream>
using namespace std;
struct Marks
{
    int id_no;
    string name;
    int chem;
    int math;
    int phy;
    void display(Marks student)
    {
        float avg;
        avg = (chem + math + phy) / 3;
        cout << "Name"
             << "\t"
             << "ID"
             << "\t"
             << "Avg marks" << endl;
        cout << name << "\t" << id_no << "\t" << avg << endl;
    }
};

int main()
{
    Marks student[5];
    cout << "A program to calculate the average marks of students\n";
    for (int i = 0; i < 2; i++)
    {
        cout << " Enter the name of studente " << i + 1 << endl;
        cin >> student[i].name;
        cout << endl;
        cout << "enter the id number of student " << i + 1 << endl;
        cin >> student[i].id_no;
        cout << endl;
        cout << "Enter the students marks in the order of Chem/Math/physics for student " << i + 1 << endl;
        cin >> student[i].chem >> student[i].math >> student[i].phy;
    }

    student[0].display(student[0]);

    return 0;
}