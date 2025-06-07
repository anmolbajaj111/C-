#include<iostream>
using namespace std;
#define PI 3.1415
int r=2;
void area();
class first{
public:
    int a;
    void display(){
    cout<<"inside the class"<<endl;
    }
};
int main(){
first f;
f.display();
area();
cout<<"hello world from main"<<endl;
return 0;
}
void area(){
float area;
area=PI*2*2;
cout<<area<<endl;

}



