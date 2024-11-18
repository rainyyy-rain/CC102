#include <iostream> 
using namespace std;

int main()
{
    int age;
    double money;
    char answer;
    
    cout << "Enter your age: ";
    cin >> age;
    cout << "Are your with your parents? (yes=y/no=n): ";
    cin >> answer;
    cout << "Amount of money do you have: ";
    cin >> money;
    
    if (age <= 13){
        if (answer == 'y'){
            cout << "You are allowed to watch rated G and PG" << endl;
        }
        else {
            cout << "You are allowed to watch rated G only" << endl;
        }
    }
    else if (age < 16){
        if (answer == 'y'){
            cout << "You are allowed to watch rated G, PG, and R" << endl;
        }
        else{
            cout << "You are allowed to watch rated G and PG" << endl;
        }
    }
    else{
        cout << "You are allowed to watch rated G, PG, and R" << endl;
    }
    
    if (money == 7.50){
        cout << "You are only watch in matinee" << endl;
    }    
    else if(money == 10.50){
        cout << "You are only watch in evening" << endl;
    }  
    else{
        cout << "You have not enough money" << endl;
    }
    return 0;
}
    