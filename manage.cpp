#include <iostream>
using namespace std;

// Function to find numbers greater than the reference
void findGreater(int array[], int reference, int **result, int &resultSize)
{
  resultSize = 0;
  for (int i = 0; i < 5; i++)
  {
    if (array[i] > reference)
    {
      (*result)[resultSize] = array[i];
      resultSize++;
    }
  }
  cout << "\nNumbers greater than the reference: ";
  for (int i = 0; i < higherSize; i++)
  {
    cout << higherNums[i] << " ";
  }
}

// Function to find numbers less than the reference
void findLower(int array[], int reference, int **result, int &resultSize)
{
  resultSize = 0;
  for (int i = 0; i < 5; i++)
  {
    if (array[i] < reference)
    {
      (*result)[resultSize] = array[i];
      resultSize++;
    }
  }
}

int main()
{
  int array[6];
  int reference;
  cout << "Enter elements of the array: ";
  for (int i = 0; i < 5; i++)
  {
    cin >> array[i];
  }

  cout << "Enter the reference number to be compared: ";
  cin >> reference;

  int *lowerNums = nullptr;
  int *higherNums = nullptr;
  int lowerSize, higherSize;

  // Call functions to find numbers
  findLower(array, reference, &lowerNums, lowerSize);
  findGreater(array, reference, &higherNums, higherSize);

  // Print results
  cout << "Numbers less than the reference: ";
  for (int i = 0; i < lowerSize; i++)
  {
    cout << lowerNums[i] << " ";
  }

  

  // Don't forget to deallocate memory
  delete[] lowerNums;
  delete[] higherNums;

  return 0;
}
