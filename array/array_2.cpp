#include<bits\stdc++.h>
using namespace std;
int oddno_oftimes(int a[],int n)
{
    int res=a[0];
    for(int i=1;i<n;i++)
    {
        res=res^a[i];
    }
 return res;
}

int main()
{
    int a[]={2,2,3,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    int x=oddno_oftimes(a,n);
    cout<<x;
    return 0;
}