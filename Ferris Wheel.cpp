#include<bits/stdc++.h>
using namespace std;

void solve(){
     int n,k; cin>>n>>k;
     vector<int> arr(n);
     int ans = 0;
     int l = 0, r = n-1;
     sort(arr.begin(), arr.end());
     while(l <= r){ 
           if(l == r){
               ans++; break;
           }
           if(arr[l]+arr[r] > k){
               ans++;
               r--;
            }else{
               ans++;
               l++,r--;
            }    
     }
     cout<<ans<<endl;
}
signed main(){
       solve();
}