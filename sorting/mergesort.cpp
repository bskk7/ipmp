#include<bits/stdc++.h>
using namespace std;

void Merge(int A[],int l,int mid,int h)
{
 int i=l,j=mid+1,k=l;
 int B[100];
 
 while(i<=mid && j<=h)
 {
 if(A[i]<A[j])
 B[k++]=A[i++];
 else
 B[k++]=A[j++];
 }
 for(;i<=mid;i++)
 B[k++]=A[i];
 for(;j<=h;j++)
 B[k++]=A[j];
 
 for(i=l;i<=h;i++)
 A[i]=B[i];
}

void MergeSort(int A[],int l,int h)
{
 int mid;
 if(l<h)
 {
 mid=(l+h)/2;
 MergeSort(A,l,mid);
 MergeSort(A,mid+1,h);
 Merge(A,l,mid,h);
 
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
 
 MergeSort(A,0,n-1);
 
 auto end = chrono::steady_clock::now();
 
 for(int i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");

 cout << "\n";
 auto diff = end - start;
 cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
 
 return 0;
}