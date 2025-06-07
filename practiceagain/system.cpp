 #include<iostream>
using namespace std;
class bank{
private:
    string name;
    long acc_no,balance,depototal,drawltotal,dtotal,wtotal,principle;
    double simplei;
    int t,r,i,j;
    int wtimes,dtimes;
    int wdrawl[100],depo[100];
public:
    void putdata();
    void si();
void display();
};
void bank::putdata(){
    depototal=0,drawltotal=0;
cout<<" ENTER THE NAME OF ACCOUNT HOLDER : ";
cin>> name;
cout<<" ENTER THE ACCOUNT NUMBER : ";
cin>> acc_no;
cout<< "ENTER THE EXISTING BALANCE : ";
cin>> balance;
if(balance>100000){
    cout<<" YOU WILL GET MORE INTEREST "<<endl<<endl<<endl;
    }
    else if(balance<=0){
        cout<<" GET A JOB OR ELSE YOU WILL BECOME HOMELESS AND BANK CORUPPTED "<<endl<<endl;
    }
    else{
        cout<<" YOU WILL GET LESS INTEREST "<<endl;
}

cout<<" ENTER THE TIME AND RATE FOR SIMPLE INTEREST "<<endl;
cin>>t>>r;
cout<<" THE NUMBER OF TIMES MONEY DEPOSITED  : ";
cin>>dtimes;
cout<<" THE NUMBER OF TIMES MONEY WITHDRAWL : ";
cin>>wtimes;
for(i=0;i<dtimes;i++){
    cout<<" VALUES DEPOSTED ARE : "<<(i+1)<<": ";
    cin>>depo[i];
    cout<<endl;
}
cout<<" TOTAL VALUE OF DEPOSIED MONEY INTO THE EXISTING MONEY OF ACCOUNT IS "<<endl;
for(i=0;i<dtimes;i++){
    depototal+=depo[i];
}
if(depototal>20000){
    cout<<" YOU ARE SAVING ALOT KEEP GOING "<<endl;


}
cout<<depototal<<endl;
cout<<" TOTAL MONEY AFTER ADDING THE TOTAL DEPOSITED MONEY INTO EXISTING ACCOUNT IS "<<endl;
dtotal=balance+depototal;
cout<<dtotal<<endl;

for(j=0;j<wtimes;j++){
    cout<<" VALUES WITHDRAWL ARE :"<<(j+1) <<": ";
    cin>>wdrawl[j];
}
cout<<" SUM OF WITHDRAWN MONEY IS "<<endl;
for(j=0;j<wtimes;j++){
    drawltotal+=wdrawl[j];
}
cout<<drawltotal<<endl;
cout<<" THE VALUE AFTER ADDING THE THE MONEY INTO THE EXISTING AND SUBTRACTING THE WITHDRAWL AMOUNT FROM IT "<<endl;
principle=dtotal-drawltotal;
cout<<" THE ACTUAL AMOUNT AFTER DEPOSITING AND WITHDRAWING IS : "<<principle<<endl;
}
void bank::si(){
simplei=principle *t *r/100;
cout<<"  THE SIMPLE INTEREST WILL BE : "<<simplei<<endl;
}
void bank::display(){
    putdata();

    cout<<endl<<endl<<endl;
    cout<<" BANK ACCOUNT INFORMATION : "<<endl;

cout<<" NAME : "<<name<<endl;
cout<<" ACCOUNT NUMBER IS : "<<acc_no<<endl;
cout<<"EXISTING BALANCE : "<<balance<<endl<<" NUMBER OF TIME DEPOSITED : "<<dtimes<<endl<<" SUM OF DEPOSITED MONEY : "<<depototal<<endl<<" VALUE AFTER ADDING DEPOSITED MONEY INTO EXISTING BALANCE : "<<dtotal<<endl;
cout<<" NUMBER OF TIMES WITHDRAWN : "<<wtimes<<endl<<" SUM OF WITHDRAWN MONEY : "<<drawltotal<<endl<<" ACUTAL AMOUNT LEFT AFTER WITHDRAWING AND DEPOSITING : "<<principle<<endl;
si();

}
int main(){
bank b1,b2;
b1.display();
cout<<endl;
cout<<" INFORMATION OF SECOND BANK ACCOUNT : "<<endl;
b2.display();
return 0;
}
