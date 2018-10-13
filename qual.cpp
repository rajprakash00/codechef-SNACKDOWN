#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,t;

  cin>>t;
  for(int j=0;j<t;++j)
  {

     cin>>n>>k;
      long ar[n];
     for(int i=0;i<n;++i)
     cin>>ar[i];

     int s=sizeof(ar)/sizeof(ar[0]);

    sort(ar,ar+s,greater<int>());

     int l=k;
     int c=0;
     int v=ar[k-1];
     while(v==ar[l])
       {
           l++;
           c++;
       }
       int res=c+k;



     cout<<res;

 }

}
