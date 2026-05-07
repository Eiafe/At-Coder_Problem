#include<bits/stdc++.h>
using namespace std;
int main(){
    int point[101];
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>point[i];
    }
    int x;
    int source=0;
    for(int i=0;i<m;i++){
            cin>>x;
        point[x];
     source+=point[x];
    }
    cout<<source<<endl;



}
