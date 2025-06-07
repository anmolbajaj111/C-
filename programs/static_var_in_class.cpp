#include<iostream>
using namespace std;
class test{
public:
static int i;
int n1,n2;
test(){
    i++;
}

};
int test::i=1;
int main(){
cout<<test::i<<endl;
test ob1;
cout<<ob1.i;
//test 
return 0;

}