// 3. Create menu driven program for Simple Bank Account:
// Write a C++ class named 'Account' with data members:
// ‘name’, 'accountNumber' and 'balance'.
// Include member functions to do the following:
//  To assign initial values.
//  To deposit an amount.
//  To withdraw an amount after checking the balance.
// (Ensure that the balance
// remains positive)
//  To display account number and balance
#include <iostream>
using namespace std;
class Account;
class Account
{
  string name;
  int accountNumber;
  long balance;
  int a;
public:
  long n;
  friend void assign_val(void);
  friend void Set_Pass_W(void);
  friend void Pass_W(void);
  friend void Ch_Pass_W(void);
  int deposit()
  {
    int d;
    cout<<endl;
    cout << "      Enter deposite balance :";
    cin >> d;
    cout<<endl;
    balance = balance + d;
    set();
    return balance;
  }
  int withdraw()
  {
    int d;
    cout<<endl;
    cout << "      Enter withdraw balance :";
    cin >> d;
    cout<<endl;
    long n;
    n = balance;
    balance = balance - d;
    if (balance >= 0)
    {
      set();
      return balance;
    }
    else
    { 
      cout<<endl;
      cout << "      Withdraw not possible ckeck Your balance...!" << endl;
      cout<<endl;
      balance = balance + d;
      set();
      return n;
    }
  }
  void display_ac_No(void);
  int Exit()
  {
    return 0;
  }
  void display_balance()
  {
    cout<<endl;
    cout << "      Your balance :" << balance << endl;
    cout<<endl;
    set();
  }
  void set(void)
  {
    cout << endl;
    cout << endl;
    cout << "_________________________________" << endl;
    cout << "|        WELCOME to SBI         |" << endl;
    display_ac_No();
    cout << "| Account Holder :              |" <<endl;
    cout << "|   " << name << endl;
    cout << "|_______________________________|" << endl;
    cout << "|   PRESS 1 : Check balance     |" << endl;
    cout << "|   PRESS 2 : Check deposite    |" << endl;
    cout << "|   PRESS 3 : Check withdraw    |" << endl;
    cout << "|   PRESS 4 : Reset             |" << endl;
    cout << "|   PRESS 5 : Change password   |" << endl;
    cout << "|   PRESS 6 : Exit              |" << endl;
    cout << "|_______________________________|" << endl;
    int k;
    cin >> k;
    switch (k)
    {
    case 1:
      display_balance();
      break;
    case 2:
      deposit();
      break;
    case 3:
      withdraw();
      break;
    case 4:
      reset();
      break;
    case 5:
      Ch_Pass_W();
      break;
    case 6:
      Exit();
      break;

    default:
      cout<<endl;
      cout << "        USER NOT FOUND" << endl;
      cout<<endl;
      reset();
      break;
    }
  }
  void assign_val()
  {
    int b;
    cout << "Enter Your name           :";
    cin >> name;
    cout << "Enter Your account Number :";
    cin >> accountNumber;
    cout << "Enter Your balance        :";
    cin >> balance;
    Set_Pass_W();
    n = balance;
  }
  void reset(void)
  {
     Pass_W();
  }
  void Set_Pass_W(void){
    int b;
    cout << "Set passward (4 digit)    :";
    cin >> a;
    label:
    cout << "Verify passward (4 digit) :\a";
    cin >> b;
    if (a == b)
    {
      set();
    }
    else
    { cout<<endl;
      cout << "        Something Wrong.....!\a" << endl;
      cout<<endl;
     goto label;
    }
  }
  void Pass_W(void){
     int b;
    cout << "Enter passward (4 digit) :";
    cin >> b;
    if (a == b)
    {
      set();
    }
    else
    { cout<<endl;
      cout << "        Something Wrong.....!" << endl;
      cout<<endl;
      Pass_W();
    }
  }
  void Ch_Pass_W(void){
    int b,c,d;
    label:
    cout<<endl;
    cout << "Enter passward (4 digit)  :";
    cin >> b;
    if(b==a){
      Set_Pass_W();
    }
    else{
      cout<<endl;
      cout << "        Something Wrong.....!" << endl;
      cout<<endl;
      goto label;
    }
  }
  };
//out side decleration of simple function
void Account::display_ac_No()
{
  cout << "| Account Number :              |" << endl;
  cout << "|   SBI945" << accountNumber  << endl;
}
//out side decleration of friend function

int main()
{
  Account A;
  A.assign_val();
  return 0;
}