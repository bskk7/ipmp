#include<bits\stdc++.h>
using namespace std;

void  pythtriplets(vector <int> a,int n)
{int x,sum;
    for(int i=n-2;i>2;i--)
    {
        
        int r=i,l=0;
        x=a[i+1]*a[i+1];
        while(r>l)
        {sum=a[r]*a[r]+a[l]*a[l];
            if(x>sum)
            l++;
            else if(x<sum)
            r--;
            else
            {
                cout<<a[l]<<" "<<a[r]<<" "<<a[i+1]<<"\n";
                break;
            }
        }

    }   
}

int main()
{
   vector <int> a={1,2,3,4,5,10,9,8,7,6};
   int n = a.size();
   
   sort(a.begin(),a.end());
   cout<<"elements after sorting"<<"\n";
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   cout<<"\n";
   pythtriplets(a,n);

   return 0;
}