#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int i,j,n,temp,min_in;
    cout << "Size of array: ";
    cin >> n;
    int arr[n];
    cout << "Unsorted Array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout<<endl;
    
    for(i=0;i<n;i++)
    {
        min_in = i;
        for(j=i+1;j<n;j++)
            if (arr[j] < arr[min_in])
                min_in = j;
                swap(arr[i],arr[min_in]);
    }
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return(0);
}