#include<bits/stdc++.h>
using namespace std;
void sumoftwo(int a[],int x,int n)
{
    int l=0;
    int r=n-1;
    int sum;
    int flag=0;
    sort(a,a+n);
    while(l<r)
    { 
        sum=a[l]+a[r];
        if(sum<x)
        l++;
        else if(x<sum)
        r--;
        else if(x==sum)
        {
            flag=1;
            cout<<"the two elements are  "<<a[l]<<" "<<a[r]<<"\n";
            l++;
        }

    }
    if(flag==0)
    cout<<"pair doesn't exist";

}

int main()
{
    int a[]={1,3,5,6,9,-4,0,-1};
    int x;
    cin>>x;
    int n=sizeof(a)/sizeof(a[0]);
    sumoftwo(a,x,n);
    return 0;
}