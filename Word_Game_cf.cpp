#include <bits/stdc++.h>
using namespace std;
#define pfi(a) printf("%d",a);
#define pfl(a) printf("%lld",a);
#define pfin(a) printf("%d\n",a);
#define pfln(a) printf("%lld\n",a);
#define pfis(a) printf("%d ",a);
#define pfls(a) printf("%lld ",a);
#define sfi(a) scanf("%d",&a);
#define sfl(a) scanf("%lld",&a);
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb(a) push_back(a)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define lb lower_bound
#define ub upper_bound
#define bp(i) __builtin_popcount(i)
ll mod=1e9+7;


int main()
{


   int t;cin>>t;
   while(t--)
   {
      int n;cin>>n;
      int ans[3]={0,0,0};
      map<string,int>m;
      string arr[3][n];
      for(int i=0;i<3;i++)
      {

      for(int j=0;j<n;j++)
{
     
     cin>>arr[i][j];
      m[arr[i][j]]++;
}

      }
      
 for(int i=0;i<3;i++)
      {

      for(int j=0;j<n;j++)
{
      if(m[arr[i][j]]==1)
      {
        ans[i]+=3;
      }
      else
         if(m[arr[i][j]]==2)
            ans[i]+=1;
}

      }


for(int i=0;i<3;i++)
   cout<<ans[i]<<" ";
cout<<endl;


   }
}
