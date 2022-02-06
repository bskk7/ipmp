#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}

void Selection(int A[],int n)
{
 int i,j,k;
 
 for(i=0;i<n-1;i++)
 {
 for(j=k=i;j<n;j++)
 {
 if(A[j]<A[k])
 k=j;
 }
 swap(&A[i],&A[k]);
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
 
 Selection(A,n);
 
 auto end = chrono::steady_clock::now();
 
 for(int i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");

 cout << "\n";
 auto diff = end - start;
 cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
 
 return 0;
}