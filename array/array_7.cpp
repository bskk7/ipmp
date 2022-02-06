#include<bits/stdc++.h>
using namespace std;

vector<int>  nexthighestpermutation(vector<int> a,int n)
{
    int i,j;
    for( i=n-1;i>0;i--)
    {
        if(a[i]>a[i-1])
        break;
    }
    if(i==0)
    cout<<"next number doesnt exist";
    for(int j=n-1;j>=i;j--)
    {
        if(a[j]>a[i-1])
        {
            swap(a[j],a[i-1]);
            break;
        }

    }
    reverse(a.begin()+i,a.end());
    return a;

}
int main() 
{  
vector<int> v={ 5,3,4,7,9,6 };
vector<int> res;
int n=v.size();
res = nexthighestpermutation(v,n);
for(int i=0;i<res.size();i++)
{
    cout<<res[i];
}

    return 0;
}  