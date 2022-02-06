#include<bits/stdc++.h>
#include<time.h>

using namespace std;

void linearsearch(int A[],int x,int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if (x==A[i])
        {
            cout<<"element found at index "<<i;
            flag=1;
            return;
        }
    }
    if (flag==0)
    cout<<"element is not found";
}

int main()
{
    int n,x;
    clock_t start,finish;
    long double runtime;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i;
    }
    cout<<"enter the element to find\n";
    cin>>x;
    start=clock();
    linearsearch(a,x,n);
    finish=clock();

    runtime=((long double)(finish-start))/CLOCKS_PER_SEC;
    cout<<"\n runtime is "<<runtime<<"sec";
    return 0;
}
