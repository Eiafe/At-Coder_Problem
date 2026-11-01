#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int result=0;
    int a;
    for(int i=1;i<=n*7;i++){
        cin>>a;
        result+=a;
        if(i%7==0){
            cout<<result<<" ";
            result=0;
        }
        
    }
   
}