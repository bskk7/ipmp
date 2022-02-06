#include<bits\stdc++.h>
#include<vector>
#include<string>
using namespace std;
void findtriplets(vector<int> a,int n,int sum)
{
    int l,r=n-1,x;
    for(int i=0;i<n;i++)
    { x= sum - a[i];
    l=i+1;

    while(l<r)
    {
        if(a[i]==a[l])
        {
            l++;
           
        }
         else if(a[i]==a[r])
        {
            r--;    
        }
        else if(x<(a[r]+a[l]))
        r--;
        else if(x>(a[r] +a[l]))
        l++;
        else if(x==a[r] +a[l])
       { cout<<"\n"<<a[i]<<" "<<a[l]<<" "<<a[r];
         break;
       }

    }
    }

}
int main()
{
    vector <int> a={1,2,3,4,5,10,9,8,7,6};
   int n = a.size();
   int sum;
   cout<<"enter sum ";
   cin>>sum;
   
   sort(a.begin(),a.end());
   cout<<"elements after sorting"<<"\n";
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   cout<<"\n";

   findtriplets(a,n,sum);

    return 0;
}