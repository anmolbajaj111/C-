#include<iostream>
using namespace std;
class stats{

    int num1;
    static int num2;
    public:
void add(){
cout<<"  VALUE OF NUM 1 = ";cin>>num1;
num1=num1+num2;
cout<<" AFTER ADDING THE NUMBERS = "<<num1<<endl;

}
stats(){
    num2++;
}
static void sdisplay(){
    cout<<" VALUE OF STATIC NUMBER IS = "<<num2<<endl;
}
};
 int stats::num2=0;
 int main(){
    stats::sdisplay();
    
 }
