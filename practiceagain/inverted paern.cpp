#include<iostream>
using namespace std;
int main(){
int r,c;
cin>>r>>c;
for(int i=1;i<=r;i++){
    for(int j=1;j<=r;j++){
        if(j==4||i==4||j==3||j==5){
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
