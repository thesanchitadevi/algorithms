#include <iostream>
using namespace std;

int maxN(int arr[], int n)
{
    int m = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(m < arr[i])
        {
            m = arr[i];
        }
    }
    return m;
}
int minN(int arr[], int n)
{
    int m = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(m > arr[i])
        {
            m = arr[i];
        }
    }
    return m;
}

int main()
{
    int n;
    // printf("Enter the size of array: ");
    cout << "Enter the size of array: " ;
    cin >> n;
    // scanf("%d", &n);

    int arr[n];

    // printf("Enter the elements of array: ");
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        // scanf("%d", &arr[i]);
        cin >> arr[i];
    }

    int max_value = maxN(arr, n);
    int min_value = minN(arr, n);

    // printf("Maximum value: %d\n", max_value);
    cout << "Maximum value: " << max_value << endl;
    // printf("Minimum value: %d\n", min_value);
     cout << "Minimum value: " << min_value;

    return 0;
}