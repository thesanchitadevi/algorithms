#include <iostream>
using namespace std;

// fibonacci() funtion definition
int fibonacci(int num)
{
    if (num == 0)
    {
        return 0; 
    }
    
    else if (num == 1)
    {
        return 1; 
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
{
    int num; 
    cout << "Enter the number of elements to be in the series : " ;
    cin >> num ;

    for (int i = 0; i < num; i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
