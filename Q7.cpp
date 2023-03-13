#include<bits/stdc++.h>
#define ll long long int
#define f(i,e) for(ll i = 0; i < e; i++)
using namespace std;

int printN(int n){
   if(n <= 0){
      return 1;
   }
   return n*printN((n - 1));
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   int n; cin>>n;
   cout<<printN(n)<<"\n";
}
return 0;
}