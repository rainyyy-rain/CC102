#include <iostream>

using namespace std;

int main(){
    int rows=8;
    for(int i=1; i<=rows; i++){
        for(int j=i; j<=rows; j++){
            cout << " #";
        }
        cout << endl;
    }
    return 0;
}
    