#include<iostream>
using namespace std;
class cuboid{
double l,b,h;
public:
    void getdata();
    void volume();
};
void cuboid::getdata(){

cout<<"enter the length breadth height :"<<endl;
cin>>l>>b>>h;
}
void cuboid::volume(){
cout<<" l*b*h*: "<<l*b*h<<endl;
}

int main(){
cuboid ob;
ob.getdata();
ob.volume();
return 0;



}
