#include <iostream>
using namespace std;
int secondlargest(int arr[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int seclarg = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] > seclarg && arr[j] != max)
        {
            seclarg = arr[j];
        }
    }
    return seclarg;
}
int main()
{
    int size;
    cout << "enter the size of array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int second = secondlargest(arr, size);
    cout << "The Second largest element in the array is:- " << second << endl;
    return 0;
}