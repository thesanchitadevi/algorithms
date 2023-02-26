#include<iostream>
using namespace std;
int main ()
{
    int n,temp;
    cout << "Total elements : " ;
    cin >> n;
    int a[n];
    cout <<"Input list : ";
    for(int i = 0; i<n; i++) {
        cin >> a[i] ;
    }
    cout<<endl;
    for(int i = 0; i<n; i++) {
        for(int j = i+1; j<n; j++)
        {
            if(a[j] < a[i]) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }
    cout <<"Sorted Element List : ";
    for(int i = 0; i<n; i++) {
       cout << a[i] << " ";
    }
    return 0;
}