#include <bits/stdc++.h>
using namespace std;


void printTwoOdd(int a[], int n) 
{
    int x=0,y=0;
    int xor1=0; 
    for(int i=0;i<n;i++)
    {
        xor1=xor1^a[i];
    }
    int bit_set=xor1&~(xor1-1);
    for(int i=0;i<n;i++)
    {
        if(bit_set&a[i])
        x=x^a[i];
        else
        y=y^a[i];
    }
    cout<<"The two numbers are "<<x<<" "<<y;


} 


int main() 
{ 
    int arr[] = {3, 2, 4, 5, 2, 3, 3, 3}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
    printTwoOdd(arr, arr_size); 
    return 0; 
} 