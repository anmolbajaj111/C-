#include<iostream>
using namespace std;

class bank {
public:
    string name;
    int i;
    int tota;
    int depositbalance;
    int rate, time;
    double account;
    int totalmoney;
    int deposit[100];
    int withdraw[100];
    void si();
    int depo();
    int drawl();
    int total();
    void display();
    void putdata();
};



int bank::depo() {
    int total = 0, times;
    cout << "TIMES DEPOSITED: ";
    cin >> times;
    for (i = 0; i < times; i++){}
        cin>>deposit[i];
}



    iltoa = totalmoney + depositbalance;
    cout << "AFTER ADDING DEPOSITING MONEY INTO EXISTING ACCOUNT MONEY: " << total << endl;
    return total;
}

int bank::drawl() {
    int dtimes, drawltotal = 0, drawlbalance = 0;
    cout << "TIMES WITHDRAWN: ";
    cin >> dtimes;
    for (int j = 0; j < dtimes; j++) {
        drawlbalance += withdraw[j];
    }
    drawltotal = totalmoney - drawlbalance;
    cout << "TOTAL VALUE AFTER DEPOSITING THE MONEY AND SUBTRACTING THE WITHDRAWL MONEY FROM THE TOTAL BALANCE AFTER DEPOSITING: " << drawltotal << endl;
    return drawltotal;
}
void bank::si() {
    cout << "THE SIMPLE INTEREST AMOUNT WILL BE : ";
    cout<< totalmoney * rate * time / 100;
}

void bank::display() {
    putdata();
    depo();
    drawl();
    si();
}

void bank::putdata() {
    rate = 2;
    time = 5;
    cout << "PUTTING THE VALUE OF RATE OF INTEREST: " << rate << endl << "PUTTING THE VALUE OF TIME: " << time << endl;
}

int main() {
    bank b1, b2;
    cout << "ACCOUNT HOLDER NAME IS: ";
    cin >> b1.name;
    cout << b1.name << endl;
    cout << "ACCOUNT NUMBER OF FIRST ACCOUNT: ";
    cin >> b1.account;
    cout << "TOTAL AMOUNT WHICH IS ALREADY THERE IN THE AMOUNT: ";
    cin >> b1.totalmoney;
    b1.display();
    cout << "ACCOUNT HOLDER NAME IS: ";
    cin >> b2.name;
    cout << b2.name << endl;
    cout << "ACCOUNT NUMBER OF SECOND ACCOUNT: ";
    cin >> b2.account;
    cout << "TOTAL AMOUNT WHICH WAS THERE IN ACCOUNT: ";
    cin >> b2.totalmoney;
    b2.display();

    return 0;
}
