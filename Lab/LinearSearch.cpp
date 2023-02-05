#include <iostream>
using namespace std;

int searchN(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main()
{
    int arr[100], n, x, i, result;
    cout <<"Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the element to be searched: ";
    cin >> x;

    result = searchN(arr, n, x);

    if (result == -1)
        cout << "Element is not present in the array: " << endl;
    else
        cout << "Element is present at index: " << result;

    return 0;
}