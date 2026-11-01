#include<bits/stdc++.h>
using namespace std;
int main (){
   int n,k;
   cin>>n>>k;
   int arry[n];
   
   for(int i=0;i<n;i++){
       cin>>arry[i];
   }
   
   int ind=n-k;
   for(int i=ind;i<n;i++){
       cout<<arry[i]<<" ";
   }
   for(int i=0;i<ind;i++){
       cout<<arry[i]<<" ";
   }
}