#include<bits/stdc++.h>
using namespace std;

void solve(){
     int cantNinos,pesoMax; cin>>cantNinos>>pesoMax;
     vector<int> arreglo(cantNinos);
     for(int i = 0; i < cantNinos; i++){
          cin>>arreglo[i];
     }
     int respuesta = 0;
     int l = 0, r = cantNinos-1;
     sort(arreglo.begin(), arreglo.end());
     while(l <= r){ 
           if(l == r){
               respuesta++; break;
           }
           if(arreglo[l]+arreglo[r] > pesoMax){
               respuesta++;
               r--;
            }else{
               respuesta++;
               l++,r--;
            }    
     }
     cout<<respuesta<<endl;
}

signed main(){
       solve();
}