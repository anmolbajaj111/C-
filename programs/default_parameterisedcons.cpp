#include<iostream>
using namespace std;
class classroom{
string sname;
int rollno;
public:
classroom(){
sname="";
rollno=0;
}
void set_name(){
    sname="rohit";
}
string get_name(){
return sname;
}
classroom(string s,int r):sname(s),rollno(r){}
void display(){
    cout<<" name = "<<sname<<endl<<" rollno = "<<rollno;
}
};
int main(){
classroom c1;
c1.set_name();

c1.display();
return 0;


}