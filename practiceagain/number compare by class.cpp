#include<iostream>
using namespace std;
class compare{
private :
    int m,n;
public:
    void getdata(int a,int b){
    a=m;
    b=n;
    }
    void display(){
    cout<<"largest is"<<largest();
    }
    int largest(){
    if(m<n)
        return m;
    else
        return n;
    }
};
int main(){
compare c1;
int m,n;
c1.getdata(m,n);
c1.display();
return 0;

}
