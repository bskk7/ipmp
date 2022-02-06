#include<bits/stdc++.h>
using namespace std;

void repeatingelements(int a[],int n)
{
    int x=0,y=0,setbit;
    int Xor=a[0];
    for(int i=1;i<=n-2;i++)
    Xor=Xor^i;
     for(int i=1;i<n;i++)
     Xor=Xor^a[i];
     setbit=Xor&~(Xor-1);
     for(int i=1;i<=n-2;i++)
     {
         if(setbit&i)
         x=x^i;
         else
         y=y^i;
     }
         for(int i=0;i<n;i++)
     {
         if(setbit&a[i])
         x=x^a[i];
         else
         y=y^a[i];
     }
cout<<"the repeated elements are "<<x<<" and "<<y;

}

int main()
{
    int a[]={4, 2, 4, 5, 2, 3, 1};
    int n =sizeof(a)/sizeof(a[0]);
    repeatingelements(a,n);
     
    return 0;
}