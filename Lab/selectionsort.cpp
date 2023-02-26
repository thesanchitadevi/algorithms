#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n, temp, min_in;
    cout << "Size of array: ";
    cin >> n;
    int arr[n];
    cout << "Unsorted Array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout<<endl;
    
    for(int i=0; i<n; i++)
    {
        min_in = i;
        for(int j=i+1; j<n; j++){
            if (arr[j] < arr[min_in]){
                min_in = j;
                swap(arr[i],arr[min_in]);
            }
        }
    }
    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;
    return(0);
}

//Size of array: 5
//Unsorted Array : 9 3 8 5 1

//Sorted Array : 1 3 5 8 9
