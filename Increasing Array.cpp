#include <bits/stdc++.h> 
#define int long long
using namespace std;
void solve(){

    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int c = 0;
    for(int i = 1; i < n; i++){
            if(arr[i] < arr[i-1]){
                    c += arr[i-1]-arr[i];
                    arr[i] = arr[i-1];
                }
        }

    cout<<c<<endl;

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}
