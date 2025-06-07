#include<iostream>
using namespace std;
class compare{
int n,m;
int large();
public:
    void getdata();
    void display();
    };
    void compare::getdata(){
    cout<<"values of two number"<<endl;
    cin>>n>>m;
    }
    int compare:: large(){

    if(n<m){
        return m;
    }
    else{
        return n;
    }

    }
    void compare ::display(){
        cout<<endl<<"the largest is :"<<large()<<endl;
    }
int main(){
    compare c;
    c.getdata();
    c.display();




return 0;
}
