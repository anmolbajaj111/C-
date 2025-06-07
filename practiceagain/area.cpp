#include<iostream>
using namespace std;
#define pi 3.1415
int r=2;
void circum();
class practice {
    public:
int r=2;
int a;
void print(){


cout<<"printing this line from the class"<<endl;
}
};
int main(){
    practice c1;
c1.a=16;
cout<<c1.a<<endl<<endl;
    c1.print();
    circum();
    cout<<"this is getting printed from the main function"<<endl;
return 0;
}
void circum(){
float area;
area=pi*r*r;
cout<<area<<endl;


}
