#include<iostream>
using namespace std;

void merge(int *array, int l, int m, int r) {
    int nl, nr;
    //size of left and right sub-arrays
    nl = m-l+1; nr = r-m;
    int larr[nl], rarr[nr];
    //fill left and right sub-arrays
    for(int i = 0; i<nl; i++)
      larr[i] = array[l+i];
    for(int j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
    int i = 0; 
    int j = 0; 
    int k = l;
    //marge temp arrays to real array
    while(i < nl && j<nr) {
        if(larr[i] <= rarr[j]) {
            array[k] = larr[i];
            i++;
        }else{
            array[k] = rarr[j];
            j++;
        }
        k++;
    }
    while(i<nl) {       //extra element in left array
        array[k] = larr[i];
        i++; 
        k++;
    }
    while(j<nr) {     //extra element in right array
        array[k] = rarr[j];
        j++; 
        k++;
    }
}
void mergeSort(int *array, int l, int r) {
    int m;
    if(l < r) {
        int m = l+(r-l)/2;
        // Sort first and second arrays
        mergeSort(array, l, m);
        mergeSort(array, m+1, r);
        merge(array, l, m, r);
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];     //create an array with given number of elements
    cout << "Enter elements: ";
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);     //(n-1) for last index
    cout << "Array after Sorting: ";
    for(int i = 0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Enter the number of elements: 5
//Enter elements: 8 0 6 7 2
//Array after Sorting: 0 2 6 7 8 