#include<bits/stdc++.h>
using namespace std;

class account{
    char name[20];
    int ac_no;
    char ac_type[20];
    float bal;

    public:
    void open_acc(void);
    void deposit(void);
    void withdraw(void);
    void display_amount(void);
    void display(void);

};

void account :: open_acc(void)
{
    cout<<endl<<endl;
    cout<<"Enter Name :-\t";
    cin>>name;
    cout<<"Enter Account No. :-\t";
    cin>>ac_no;
    cout<<"Enter Account Type :-\t";
    cin>>ac_type;
    cout<<"Enter Opening Balance\t";
    cin>>bal;
}

void account :: deposit(void)
{
    float deposit=0;
    cout<<"Enter Deposit Amount :-\t";
    cin>>deposit;
    bal+=deposit;
    cout<<"\n Amount Deposited Successfully\t";
}

void account :: withdraw(void)
{
    float withdraw;
    cout<<"\n Available Amount = \t\t"<<bal;
    cout<<"\n Enter Withdraw Amount :-\t";
    cin>>withdraw;

    if(bal>withdraw){
        bal-=withdraw;
        cout<<"\n Amount Available After Withdrawal is = \t"<<bal;
    }
    else{
        cout<<" \n\t Insufficient Amount Entered.... Please Check your balance & Retry";
    }
}

void account :: display_amount(void)
{
    cout<<" \n\n Available Amount = \t "<<bal;
}
void account :: display(void)
{
    cout<<endl<<endl<<endl;
    cout<<setw(50)<<" DETAILS"<<endl;
    cout<<setw(50)<<" Name "<<name<<endl;
    cout<<setw(50)<<" Account Number "<<ac_no<<endl;
    cout<<setw(50)<<" Account Type "<<ac_type<<endl;
    cout<<setw(50)<<" Balance "<<bal<<endl;
    
}
int main(){
    account b;
    int option;

    do{
        cout<<"\n\n\n\t Banking Record System";
        cout<<"\n\n MENU \n\n";
        cout<<"1) Open a New Account\n";
        cout<<"2) Deposit Money\n";
        cout<<"3) Withdraw Money\n";
        cout<<"4) Balance Enquiry\n";
        cout<<"5) Display Account Information\n";
        cout<<"6)EXIT\n";
        cout<<"Select your Option :-  ";
        cin>>option;
       
        switch(option){

            case 1: b.open_acc();
            break;

            case 2: b.deposit();
            break;

            case 3: b.withdraw();
            break;

            case 4: b.display_amount();
            break;

            case 5: b.display();
            break;

            case 6: goto end;

            default: cout<<"\n Invalid Option.....";
        }
    }while(1);

    end: 
    return 0;
}