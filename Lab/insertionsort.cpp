#include<iostream>
using namespace std;

int main() {
   int n, key;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];    //create an array with given number of elements
   cout << "Enter elements: " ;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   int size = sizeof(arr)/sizeof(arr[0]);
   for(int i = 1; i<size; i++) {
      key = arr[i];//take value
      int j = i;
      while(j > 0 && arr[j-1]>key) {
         arr[j] = arr[j-1];
         j--;
      }
      arr[j] = key;   //insert in right place
   }
   cout << "Array after Sorting: ";
    for(int i = 0; i<size; i++)
      cout << arr[i] << " ";
   cout << endl;
}

//Enter the number of elements: 5
//Enter elements: 99 66 77 22 11
//Array after Sorting: 11 22 66 77 99
