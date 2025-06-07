#include<iostream>
using namespace std;
#define pi 3.1415
class circle{
double r;
public:
    void getdata(double rad){
        r=rad;
    }
double circum(){
return 2*pi*r;
}
double area(){

return pi*r*r
}

};
int main(){
circle c;


c.getdata(10.5);
cout<<"circumfren"<<c.circum()<<endl;
cout<<"area :"<<c.area()<<endl;
return 0;


}
