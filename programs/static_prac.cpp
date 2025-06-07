#include <iostream>
using namespace std;
class student{
public:
static int rollno;
string name;
student(string n){
    name=n;
rollno++;
}
};

int student::rollno=1;
int main(){
cout<<student::rollno<<endl;
student s1("anmol");
cout<<"NAME AND ROLL NO IS ("<<s1.name<<","<<s1.rollno<<")"<<endl;
return 0;

}


