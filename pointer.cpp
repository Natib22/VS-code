#include <iostream>
using namespace std;

int *findingHigher(int reference, int array[], int &k);
int *findingLower(int reference, int array[], int &j);

int main()
{
    int array[6];
    int reference;
    int *lowerPointer;
    int *higherPointer;

    cout << "Enter elements of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    cout << "Enter the reference number to be compared: ";
    cin >> reference;

    int j = 0;
    int k = 0;

    lowerPointer = findingLower(reference, array, j);
    higherPointer = findingHigher(reference, array, k);

    cout << "Numbers less than the reference: ";
    for (int i = 0; i < j; i++)
    {
        cout << *(lowerPointer + i) << " ";
    }

    cout << "\nNumbers greater than the reference: ";
    for (int i = 0; i < k; i++)
    {
        cout << *(higherPointer + i) << " ";
    }

    delete[] lowerPointer;
    delete[] higherPointer;

    return 0;
}

int *findingHigher(int reference, int array[], int &k)
{
    int *higherNums = new int[5];
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > reference)
        {
            higherNums[k] = array[i];
            k++;
        }
    }
    return higherNums;
}

int *findingLower(int reference, int array[], int &j)
{
    int *lowerNums = new int[5];
    for (int i = 0; i < 5; i++)
    {
        if (array[i] < reference)
        {
            lowerNums[j] = array[i];
            j++;
        }
    }
    return lowerNums;
}
