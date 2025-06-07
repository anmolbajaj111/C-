#include<iostream>
using namespace std;
//#define pi 3.1415
//void area();
class circle{
public:
    int r;
    void area(){
float res;
res=(22/7)*r*r;
cout<<res;

}
};

int main(){
circle c;
cout<<"enter r:"<<endl;
cin>>c.r;
//cout<<c.r<<endl;
c.area();
return 0;
}

