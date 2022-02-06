#include<iostream>

using namespace std;
int missingno(int a[],int n)
{
    int i=0,x=1;
    while(i<n)
    {
        if(a[i]==x)
        {
            i++;
            x++;
        }
       else
       break;
    }
    return x;


}
int main()
{ 
    int a[]={1,2,3,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int x= missingno(a,n);
    cout<<x;

    return 0;
}