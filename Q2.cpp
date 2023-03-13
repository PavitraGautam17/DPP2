#include<bits/stdc++.h>
#define ll long long int
#define f(i,e) for(ll i = 0; i < e; i++)
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   string s; cin>>s;
   int i=0, j=s.size()-1;
   bool flag = false;
   while(i<j){
    if(s[i]==s[j]){
        i++; j--;
        flag = true;
    }
    else{
        flag = false;
        break;
    }
   }
   if(flag){
    cout<<"Yes\n";
   }
   else{
    cout<<"No\n";
   }
}
return 0;
}