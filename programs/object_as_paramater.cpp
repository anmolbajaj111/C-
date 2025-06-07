#include<iostream>
using namespace std;
class exam{
int v1,v2;
string name;
public:
exam(string n,int a,int b){
name=n;
v1=a;
v2=b;

}
void display(){

    cout<<" NAME IS = "<<name<<endl;
    cout<<" VALUES ARE "<<endl<<" V1 = "<<v1<<endl<<"v2 = "<<v2<<endl;
}
void add(exam v){
v1=v1+v.v1;
v2=v2+v.v2;
}

};
int main(){
    exam ob1("anmol",5,20),ob2(" rahul",10,20);
    cout<<" FIRST OBJECT DATA BEFORE ADDITION "<<endl;
    ob1.display();
    
    cout<<endl<<" SECOND OBJECT DATA BEFORE ADDITION "<<endl;
    ob2.display();
    
    cout<<endl<<" FIRST OBJECT DATA AFTER ADDITION "<<endl;
ob1.add(ob2);
ob1.display();

    cout<<endl<<" SECOND OBJECT DATA AFTER ADDITION "<<endl;
    ob2.display();
    return 0;

}


