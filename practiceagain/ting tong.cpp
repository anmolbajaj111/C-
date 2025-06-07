#include<iostream>
using namespace std;
class bank{
public:
    string name;
    int rate,time;
    double account;
    int totalmoney;
    int si();
    void depo();
    int drawl();
    int total();
    void display();
    void putdata();
};
void putdata(){
    int rate=2,time=5,totalmoney;
cout<<" PUTTING THE VALUE OF RATE OF INTEREST :"<<rate<<endl<< "PUTTING THE VALUE OF TIME : "<<time<<endl;
cout<<" PUTTING THE ACTUAL AMOUNT :"<<endl;
cin>>totalmoney;
}
void depo(){
int total,times,depositbalance,deposit[100],totalmoney;
cout<<" total money "<<endl;
cin>>totalmoney;
cout<<" TIMES DEPOSITED "<<endl;
cin>>times;
for (int i=0;i<times;i++){
    depositbalance+=deposit[i];

    }
total=totalmoney+depositbalance;
cout<<" AFTER ADDING DEPOSITING MONEY INTO EXISTING ACCOUNT MONEY :"<<endl;
cout<<total;
}
void drawl(){
    int drawlbalance,dtimes,drawltotal,withdraw[100],total;
cout<<" TIMES WITHDRAWN :"<<endl;
cin>>dtimes;
for (int j=0;j<dtimes;j++){
    drawlbalance+=withdraw[j];
}
cout<<" total"<<endl;
cin>>total;
drawltotal=total-drawlbalance;
cout<<" TOTAL VALUE AFTER DEPOSITING THE MONEY AND SUBTRACTING  THE WITHDRAWL MONEY FROM THE TOTAL BALANCE AFTER DEPOSITING :"<<endl;
cout<< drawltotal;
}
void si(){
    int drawltotal,rate,time;
    cout<<" drawl total "<<endl;
    cin>>drawltotal;
    cout<<"rate and time"<<endl;
    cin>>rate>>time;
    cout<<" THE SIMPLE INTEREST AMOUNT WILL BE : ";
cout<<drawltotal*rate*time/100<<endl;
}
void display(){
putdata();
depo();
drawl();
si();
}

int main(){
    bank b1,b2;
    cout<<" ACCOUNT HOLDER NAME IS : "<<endl;
    cin>>b1.name;
    cout<<b1.name<<endl;
    cout<<" ACCOUNT NUMBER OF FIRST ACCOUNT "<<endl;
    cin>>b1.account;
    cout<<" TOTAL AMOUNT WHICH IS ALREADY THERE IN HE AMOUNT "<<endl;
    cin>>b1.totalmoney;
    b1.display();
    cout<<" ACCOUNT HOLDER NAME IS : "<<endl;
    cin>>b2.name;
    cout<<b2.name<<endl;
    cout<<" ACCOUNT NUMBER OF SECOND ACCOUNT "<<endl;
    cin>>b2.account;
    cout<<" TOTAL AMOUNT WHICH WAS THERE IN ACCOUNT "<<endl;
    cin>>b2.totalmoney;
    b2.display();



return 0;
}

