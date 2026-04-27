#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,k,m;
    cin>>n>>k>>m;
    int s=0;
    for(int i=1;i<=n-1;i++){
        int a;
        cin>>a;
        s+=a;
    }
    int re = n*m-s;
    if(re>k){
        cout<<"-1"<<endl;
    }
    else if (re<0){
        cout<<"0"<<endl;
    }
    else{
        cout<<re<<endl;
    }


}
