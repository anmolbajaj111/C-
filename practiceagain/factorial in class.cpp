#include<iostream>
using namespace std;
class result{
public:
   // int fact=1;
    int n;
    void fact(){

    }

};
int main(){
result r;
cout<<"value for number which we are going to print"<<endl;
cin>>r.n;
for(int i=1;i<=r.n;i++){
    r.fact*=i;
    cout<<r.fact<<endl;
}

return 0;

}
