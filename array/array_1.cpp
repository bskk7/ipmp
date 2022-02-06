#include<iostream>
using namespace std;

void printunion(int a[],int b[],int n,int m)
{  int i=0, j=0;
cout<<"union:";
   while(i<n &&j<m) 
   {
       while(a[i]==a[i+1])
       i++;
       while(b[j]==b[j+1])
       j++;
       if(a[i]<b[j])
       {
       cout<<a[i];
       i++;}
       else if(b[j]<a[i])
       {
       cout<<b[j];
       j++;}
       else
      { cout<<a[i];
       i++;
       j++;}
       
   }
   if(i<n)
   {
       while(i<n)
       {   while(a[i]==a[i+1])
           i++;
      
           cout<<a[i];
           i++;
       }
   }
   if(j<m)
   {
     while(j<m)
       {   while(b[j]==b[j+1])
           j++;
      
           cout<<b[j];
           j++;
       }  
   }
cout<<endl;
}
void printintersection(int a[],int b[],int n,int m)
{
    int i=0, j=0;
cout<<"intersection:";
   while(i<n &&j<m) 
   {
       while(a[i]==a[i+1])
       i++;
       while(b[j]==b[j+1])
       j++;
       if(a[i]<b[j])
       {
      
       i++;}
       else if(b[j]<a[i])
       {
       
       j++;}
       else
      { cout<<a[i];
       i++;
       j++;}
       
   }
  
}
int main()
{
    int a[]={1,2,2,2,3,4};
    int b[]={3,4,5,6,7,7,8};
    int n,m;
    n=sizeof(a)/sizeof(a[0]);
    m=sizeof(b)/sizeof(b[0]);
    printunion(a,b,n,m);
    printintersection(a,b,n,m);
    return 0;

}