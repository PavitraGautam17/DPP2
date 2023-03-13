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
   int n; cin>>n;
   int a[n][n];
   f(i,n){
    f(j,n){
        cin>>a[i][j];
    }
   }
   for(int i=0; i<n/2; i++){
    for(int j=i; j<n-1; j++){
        int temp = a[i][j];
        a[i][j] = a[j][n-i-1];
        a[j][n-i-1] = a[n-i-1][n-j-1];
        a[n-i-1][n-j-1] = a[n-j-1][i];
        a[n-j-1][i] = temp;
    }
   }
   f(i,n){
    f(j,n){
        cout<<a[i][j]<<" ";
    }cout<<"\n";
   }
}
return 0;
}