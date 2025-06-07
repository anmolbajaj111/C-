#include<iostream>
using namespace std;
void swappp(int &a,int &b){
    int t;
    cout<<" VALUE BEFORE SWAP IN FUNCTION OUTSIDE MAIN "<<endl<<" A = "<<a<<endl<<" B = "<<b<<endl;
    cout<<" AFTER SWAPPING OUTSIDE THE MAIN FUNCTON "<<endl;
t=a;
a=b;
b=t;
cout<<" A = "<<a<<endl<<" B = "<<b<<endl;
}
int main(){
    int aa,bb;
    cout<<" PUT VALUES OF AA AND BB "<<endl;
    cin>>a>>b;
    cout<<" VALUE BEFORE SWAP INSIDE MAIN "<<endl<<" AA = "<<aa<<endl<<" BB = "<<bb<<endl;
    swapp(aa,bb);
     cout<<" AFTER SWAPPING INSIDE THE MAIN FUNCTON "<<endl;
     cout<<"AA = "<<aa<<endl<<"BB = "<<bb<<endl;
     return 0;

}