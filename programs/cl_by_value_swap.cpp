#include<iostream>
using namespace std;
void swapp(int a,int b ){
    int t;
    cout<<" VALUES BEFORE SWAPPING IN FUNCTION"<<endl;
    cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
    t=a;
    a=b;
    b=t;
    cout<<" UPADATED VALUES "<<endl<<" A = "<<a<<endl<<" B = "<<b<<endl;
}
int main(){
    int aa;
    int bb;
    cout<<" VALUE OF AA = ";
    cin>>aa;
    cout<<endl<<" VALUE OF BB = ";
    cin>>bb;
    
    swapp(aa,bb);
    cout<<" VALUE IN MAIN FUNCTION "<<endl;
     cout<<" UPADATED VALUES "<<endl<<" A = "<<aa<<endl<<" B = "<<bb<<endl;
return 0;
}