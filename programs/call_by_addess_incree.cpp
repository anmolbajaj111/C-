#include<iostream>
using namespace std;
void change(int *n){
    (*n)++;
    cout<<" VALUE IS = "<<*n;
}
int main(){
int n;
cout<<" enter the value of n "<<endl;
cin>>n;

change(&n);
cout<<" UPDATE VALUE IS = "<<n;


}