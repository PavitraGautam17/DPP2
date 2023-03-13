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
   string s1,s2; cin>>s1>>s2;
   map<char,int>m1;
   map<char,int>m2;
   bool flag = true;
   int n=s1.size();
   int m=s2.size();
   f(i,n){
     m1[s1[i]]++;
   }
   f(i,m){
    m2[s2[i]]++;
   }
   f(i,n){
    if(m1[s1[i]]!=m2[s2[i]]){
        flag = false;
        break;
    }
   }
   if(n!=m){
    flag = false;
   }
   if(flag){
    cout<<"yes\n";
   }
   else{
    cout<<"no\n";
   }
}
return 0;
}