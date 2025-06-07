#include<iostream>
using namespace std;
void incree(int n){
cout<<" VALUE OF N BEFORE INCREEMENT IN FUNCTION = "<<n<<endl;
n++;
cout<<" AFTER INCREEMENT in FUNCTION "<<n<<endl;
}
int main(){
int a;
cout<<" VALUE OF A INSIDE MAIN  = ";
cin>>a;
cout<<" A = "<<a<<endl;
cout<<" AFTER USING FUNCTION "<<endl;
incree(a);
cout<<" VALUE AFTER INCREEMENT IN MAIN FUNCTION = "<<a<<endl;
return 0;

}