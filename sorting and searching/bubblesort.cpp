#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void Bubble(int A[],int n)
{
 int i,j,flag=0;
 
 for(i=0;i<n-1;i++)
 {
    flag=0;
for(j=0;j<n-i-1;j++)
 {
    if(A[j]>A[j+1])
   {
    swap(&A[j],&A[j+1]);
    flag=1;
   }
 }
 if(flag==0)
 break;
 }
 
}
int main()
{
 int n;
 cin>>n;
 int A[n];

 for(int i=0;i<n;i++)
 cin>>A[i];

 auto start = chrono::steady_clock::now();
 
 Bubble(A,n);
 
 auto end = chrono::steady_clock::now();
 
 for(int i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");

 cout << "\n";
 auto diff = end - start;
 cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
 
 return 0;
}