#include<bits\stdc++.h>
using namespace std;


void printTwoOdd(int a[], int n,int *x,int *y) 
{
     *x=0,*y=0;
    int xor1=0; 
    for(int i=0;i<n;i++)
    {
        xor1=xor1^a[i];
    }
    int bit_set=xor1&~(xor1-1);
    for(int i=0;i<n;i++)
    {
        if(bit_set&a[i])
        *x=*x^a[i];
        else
        *y=*y^a[i];
    }
    //cout<<"The two numbers are "<<x<<" "<<y;
    

} 


int main() 
{ 
    int arr[] = {2, 4, 7, 9, 2, 4}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
    int *x=new int ,*y= new int;
    printTwoOdd(arr, arr_size,x,y);
    cout<<*x<<" "<<*y; 
    return 0; 
} 
