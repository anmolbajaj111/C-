#include<iostream>
using namespace std;
class student{
private:
    int rollno;
    int marks[5];
    public:
    void putdata();
    int sum();
    void display();
};
void student:: putdata(){
cout<<"THE ROLL NUMBER IS :"<<endl;
cin>>rollno;
int i;
for(i=0;i<5;i++){
    cout<<" MARKS OF STUDENT :"<<(i+1)<<" ";
    cin>>marks[i];
}
}
int student::sum(){
cout<<" SUM FOR ALL SUBJECT IS :"<<endl;
int i;
 int summ=0;
 for(i=0;i<5;i++){


 summ+=marks[i];
 }
 return summ;

}
void student ::display(){
    cout<<sum();

}
int main(){
student ss;
ss.putdata();
ss.display();


return 0;
}
