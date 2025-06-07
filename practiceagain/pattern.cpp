#include<iostream>
using namespace std ;
int main(){

int i,n;
cin>>n;
for(i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1||i==n||j==n||j==1||j==3||j==5){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        }
        cout<<endl;
    }
    return 0;
}


