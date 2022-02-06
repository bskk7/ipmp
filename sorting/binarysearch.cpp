#include<bits/stdc++.h>
using namespace std;
 
void binarysearch(int a[],int l,int r,int x)
{
    int mid=(l+r)/2;
       if(l<=r)
        {if(a[mid]>x)
        binarysearch(a,l,mid-1,x);
        else if(a[mid]<x)
        binarysearch(a,mid+1,r,x);
        else if(a[mid]==x)
        cout<<mid<<" is the index\n";
        }
        else 
        cout<<"element not present in the array\n";   
        
}
 
int main()
{
    int a[]={1,4,5,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int x;
    cin>>x;
    binarysearch(a,0,n-1,x);  
    return 0;

}