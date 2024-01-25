#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

struct profile
{
    string firstName;
    string LastName;
    long long phone;
    int last = 0;
    // fstream myfile;
    void Add()
    {
        fstream myfile;
        myfile.open("Contacts.txt", ios::out | ios::app);
        cout << "Enter the person's First Name: ";
        cin >> firstName;
        myfile << firstName << ",";
        cout << endl;
        cout << "Enter the person's Last Name: ";
        cin >> LastName;
        myfile << LastName << ",";
        cout << endl;
        cout << "Enter the person's phone number: ";
        cin >> phone;
        myfile << phone << "," << "\n";
        cout << endl;
        last++;
        myfile.close();
    }
};

profile contacts[25];
int globalInserter = 0;

void search(long long searching);
void removeContact(long long removing);
void updateContact(long long updating);

int main()
{
    int choice;

    do
    {
        cout << "Enter the number of the operation you want to perform" << endl;
        cout << "1. Add contact" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            if (globalInserter < 25)
            {
                contacts[globalInserter].Add();
                cout << "Contact added with phone number: " << contacts[globalInserter].phone << endl;
                globalInserter++;
            }
            else
            {
                cout << "Cannot add more contacts. Array is full." << endl;
            }
            break;

        case 2:
            exit(0);
            break;

        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
            break;
        }

        cout << "Do you want to add more contacts? (1 for Yes, 0 for No): ";
        cin >> choice;

    } while (choice != 0);

    cout << "Choose the next operation you want to perform" << endl;

    cout << "1. Search a contact" << endl;
    cout << "2. Remove a contact" << endl;
    cout << "3. Update a contact" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        long long searching;
        cout << "Enter the phone number you want to search for: ";
        cin >> searching;
        search(searching);
        cout << endl;
        break;

    case 2:
        long long removing;
        cout << "Enter the phone number you want to remove: ";
        cin >> removing;
        removeContact(removing);
        cout << endl;
        break;

    case 3:
        long long updating;
        cout << "Enter the phone number you want to update: ";
        cin >> updating;
        updateContact(updating);
        cout << endl;
        break;

    default:
        cout << "Invalid choice. Exiting program." << endl;
        break;
    }

    cout << "Phone number of the first contact: " << contacts[0].phone << endl;

    return 0;
}

void search(long long searching)
{
    for (int i = 0; i < globalInserter; i++)
    {
        if (contacts[i].phone == searching)
        {
            cout << "Contact found!" << endl;
            cout << "First Name: " << contacts[i].firstName << endl;
            cout << "Last Name: " << contacts[i].LastName << endl;
            cout << "Phone Number: " << contacts[i].phone << endl;
            return;
        }
    }
    cout << "Contact not found!" << endl;
}

void removeContact(long long removing)
{
    for (int i = 0; i < globalInserter; i++)
    {
        if (contacts[i].phone == removing)
        {
            cout << "Contact removed!" << endl;
            // Shift elements to fill the gap
            for (int j = i; j < globalInserter - 1; j++)
            {
                contacts[j] = contacts[j + 1];
            }
            globalInserter--;
            return;
        }
    }
    cout << "Contact not found! Unable to remove." << endl;
}

void updateContact(long long updating)
{
    for (int i = 0; i < globalInserter; i++)
    {
        if (contacts[i].phone == updating)
        {
            int updateChoice;
            cout << "Choose the property to update:" << endl;
            cout << "1. First Name" << endl;
            cout << "2. Last Name" << endl;
            cout << "3. Phone Number" << endl;
            cout << "Enter your choice: ";
            cin >> updateChoice;

            switch (updateChoice)
            {
            case 1:
                cout << "Enter the new First Name: ";
                cin >> contacts[i].firstName;
                cout << "First Name updated!" << endl;
                break;

            case 2:
                cout << "Enter the new Last Name: ";
                cin >> contacts[i].LastName;
                cout << "Last Name updated!" << endl;
                break;

            case 3:
                cout << "Enter the new Phone Number: ";
                cin >> contacts[i].phone;
                cout << "Phone Number updated!" << endl;
                break;

            default:
                cout << "Invalid choice. No updates made." << endl;
                break;
            }
            return;
        }
    }
    cout << "Contact not found! Unable to update." << endl;
}
