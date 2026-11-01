#include<bits/stdc++.h>
using namespace std;
int main (){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int cnt=0;
       int a;
       for(int i=1;i<=n;i++){
           cin>>a;
           if(a%2==1){
               cnt++;
           }
           
       }
       cout<<cnt<<endl;
   }
   
}