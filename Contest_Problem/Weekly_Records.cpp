#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int arr[7];
        for(int j=0;j<7;j++){
            cin>>arr[j];
        }
        int sum=0;
        for(int j=0;j<7;j++){
            sum+=arr[j];
        }
        cout<<sum<<"  ";

    }
    cout<<" "<<endl;

}
