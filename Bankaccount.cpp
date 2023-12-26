#include <iostream>
using namespace std;
struct profile
{
    string name;
    int bankAccNumber;
    int balance;
    void display(const profile &person)
    {
        if (person.balance < 500)
        {
            cout << " " << name << " has a balance of less than 500\n";
        }
        else if (person.balance >= 1000)
        {
            balance += 100;
        }
    }
};
int main()
{
    profile person[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the persons name\n";
        cin >> person[i].name;
        cout << "Enter the individuals bank acc number\n";
        cin >> person[i].bankAccNumber;
        cout << "Enter the perons balance\n";
        cin >> person[i].balance;
    }
    for (int i = 0; i < 10; i++)
    {
        person[i].display(person[i]);
    }

    return 0;
}