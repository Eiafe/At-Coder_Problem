#include<bits/stdc++.h>
using namespace std;
int cnt[100001];
int main(){
    int n;
    int card;
    cin>>n;
    for(int i=0;i<4*n-1;i++){
        cin>>card;
        cnt[card]++;

    }
    int chor=0;
    for(int value=1;value<=n;value++){
        if(cnt[value]!=4){
            chor=value;
        }

    }
    cout<<chor<<endl;


}
