#include <iostream> 
using namespace std;

int main()
{
    char account, level;
    double balance;
    
    cout << "What type of account is your bank account? (personal=P/bussines=B): ";
    cin >> account;
    cout << "Enter the level of your bank account (standard=S/gold=G/platinum=P): ";
    cin >> level;
    cout << "Enter the minimum balance in your bank account: ";
    cin >> balance;
    
    if (account == 'P'){
       cout << "Your account is Personal.\n";
           if(level == 'S'){
               cout << "Level of your account is Standard. \n";
                   if (balance == 0){
                       cout << "Your interest rate is 1.2. " << endl;
                   }
                   else{
                       cout << "Invalid balance. ";
                   }
           }
           else if (level == 'G'){
               cout << "Level of your account is Gold. \n";
                   if (balance == 1000){
                       cout << "Your interest rate is 1.9. " << endl;
                   }
                   else {
                       cout << "Invalid balance. ";
                   }
           }
           else if (level == 'G'){
               cout << "Level of your account is Gold. \n";
                   if (balance == 5000){
                       cout << "Your interest rate is 2.3. " << endl;
                   }
                   else{
                       cout << "Invalid balance. ";
                   }
           }
           else {
               cout << "Invalid account." << endl;
           }
     }
    else if(account == 'B'){
        cout << "Your bank account is Business. \n";
            if (level == 'S'){
                cout << "Level of your account is Standard. \n";
                    if (balance == 1500){
                        cout << "Your interest rate is 1.7. " << endl;
                    } 
                    else {
                        cout << "Invalid balance. " << endl;
                    }
            }
            else if (level == 'P'){
                cout << "Level of your account is Platinum. \n";
                    if (balance == 10000){
                        cout << "Your interest rate is 2.5" << endl;
                    }
                    else{
                        cout << "Invalid balance. " << endl;
                    }
            }
            else {
               cout << "Invalid account" << endl;
            }
    }
    else {
        cout << "Invalid account ." << endl;
    }
    return 0;
}
    