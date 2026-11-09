#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int arry[n];
    for(int i=0;i<n;i++){
        cin>>arry[i];

    }
    int ans= -1;
    int x1,x2;
    for(int i=0;i<n-1;i++){
     x1=arry[i],x2=arry[i+1];

           if(x2-x1<=d){
            ans=x2;
            break;


            }

           }
            cout<<ans;

    }



