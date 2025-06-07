#include<iostream>
using namespace std;
class ref{
    int a,b,c;
    public:
    void getdata();
    void swap();
    int get_a(){
        return a;
    }
    

};
void ref::getdata(){
cout<<" value of a is = ";
cin>>a;
cout<<" value of b is = ";
cin>>b;
cout<<" value before  swapping is "<<endl<<" A = "<<a<<endl<<" B = "<<b<<endl;
}

void ref::swap(){

c=a;
a=b;
b=c;
cout<<" value after swapping is "<<endl<<" A IS = "<<a<<endl<<" B IS = "<<b<<endl;
}
int main(){
ref r1;
r1.getdata();
cout<<" value of a in main is  before swapping = "<<r1.get_a()<<endl;
r1.swap();
cout<<r1.get_a();



return 0;
}
