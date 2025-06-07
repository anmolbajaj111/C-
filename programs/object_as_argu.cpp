#include<iostream>
using namespace std;
class time{
int h,m;
public:
void getdata();

void putdata();
void sum(time t1,time t2 ){
    h=(t1.m+t2.m)/60;
    m=(t1.h+t2.h)%60;
    h=h+(t1.h+t2.h);
}

void putdata(){
    getdata();
    cout<<" VALUE OF HOURS = "<<h<<endl;
    cout<<" VALUE OF MINUTES = "<<m<<endl;

void time:: getdata(){
cout<<" \n value for hours and minutes"<<endl;
cin>>h>>m;

};
int main(){
time t1,t2,t3;
t1.putdata();t2.putdata();t3.putdata();
t3.sum(t1,t2);
return 0;


}







