#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}

void Insertion(int A[],int n)
{
 int i,j,x;
 
 for(i=1;i<n;i++)
 {
 j=i-1;
 x=A[i];
 while(j>-1 && A[j]>x)
 {
 A[j+1]=A[j];
 j--;
 }
 A[j+1]=x;
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
 
 Insertion(A,n);
 
 auto end = chrono::steady_clock::now();
 
 for(int i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");

 cout << "\n";
 auto diff = end - start;
 cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
 
 return 0;
}